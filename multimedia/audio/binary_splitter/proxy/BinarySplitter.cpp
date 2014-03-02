/*
 * Copyright (C) ST-Ericsson SA 2010. All rights reserved.
 * This code is ST-Ericsson proprietary and confidential.
 * Any use of the code for whatever purpose is subject to
 * specific written permission of ST-Ericsson SA.
 */

#include "BinarySplitter.h"
#include "BinarySplitter_PcmPort.h"
#ifndef HOST_ONLY
#include "BinarySplitterNmfMpc.h"
#endif
#include "BinarySplitterNmfHost.h"

// UID top dictionnary (generated by trace compiler)
#include "BINARY_SPLITTER_top.h"
#include "BINARY_SPLITTER_HOST_top.h"

#ifndef HOST_ONLY
OMX_ERRORTYPE splitterFactoryMethod(ENS_Component_p * ppENSComponent) {
    OMX_ERRORTYPE error  = OMX_ErrorNone;

    BinarySplitter *binarysplitter = new BinarySplitter(false);
    if (binarysplitter == 0) {
        return OMX_ErrorInsufficientResources;
    }

    error = binarysplitter->construct();
    if (error != OMX_ErrorNone){
        delete binarysplitter;
        *ppENSComponent = 0;
        return OMX_ErrorInsufficientResources;
    } else{
        *ppENSComponent = binarysplitter;
    }

    if (*ppENSComponent) {
        BinarySplitterNmfMpc *binarysplitter_ProcessingComp = new BinarySplitterNmfMpc(*binarysplitter);
        if (binarysplitter_ProcessingComp == 0) {
            delete binarysplitter;
            *ppENSComponent = 0;
            return OMX_ErrorInsufficientResources;
        }

        binarysplitter->setProcessingComponent(binarysplitter_ProcessingComp);
    }
    return error;

}
#endif

OMX_ERRORTYPE splitterhostFactoryMethod(ENS_Component_p * ppENSComponent) {
    OMX_ERRORTYPE error  = OMX_ErrorNone;

    BinarySplitter *binarysplitter = new BinarySplitter(true);
    if (binarysplitter == 0) {
        return OMX_ErrorInsufficientResources;
    }

    error = binarysplitter->construct();
    if (error != OMX_ErrorNone){
        delete binarysplitter;
        *ppENSComponent = 0;
        return OMX_ErrorInsufficientResources;
    }
    else{
        *ppENSComponent = binarysplitter;
    }

    if (*ppENSComponent) {

        BinarySplitterNmfHost *binarysplitter_ProcessingComp = new BinarySplitterNmfHost(*binarysplitter);
        if (binarysplitter_ProcessingComp == 0) {
            delete binarysplitter;
            *ppENSComponent = 0;
            return OMX_ErrorInsufficientResources;
        }

        binarysplitter->setProcessingComponent(binarysplitter_ProcessingComp);
    }
    return error;

}

BinarySplitter::~BinarySplitter() {
}

OMX_ERRORTYPE BinarySplitter::construct()
{
    OMX_ERRORTYPE error;
    OMX_U32 idx;
    OMX_AUDIO_PARAM_PCMMODETYPE defaultPcmSettings;
    BinarySplitter_PcmPort *binarysplitterPort;

    error = AFM_Component::construct(NB_OUTPUT_PORTS + NB_INPUT_PORTS, 2, mIsHost);
    if (error != OMX_ErrorNone) return error;

    ENS_String<35> role = "audio_splitter.binary";
    role.put((OMX_STRING)mRoles[0]);

    ENS_String<35> role1 = "audio_splitter.channelswitchboard";
    role1.put((OMX_STRING)mRoles[1]);

    setActiveRole(mRoles[0]);


    mBlockSize = DEFAULT_PCM_BLOCKSIZE;

    defaultPcmSettings.nSize          = sizeof(OMX_AUDIO_PARAM_PCMMODETYPE);
    defaultPcmSettings.eNumData       = OMX_NumericalDataSigned;
    defaultPcmSettings.eEndian        = OMX_EndianLittle;
    defaultPcmSettings.bInterleaved   = OMX_TRUE;
    defaultPcmSettings.ePCMMode       = OMX_AUDIO_PCMModeLinear;
    defaultPcmSettings.nBitPerSample  = 16;

    defaultPcmSettings.nChannels      = 2;
    defaultPcmSettings.nSamplingRate  = 48000;
    defaultPcmSettings.nPortIndex     = 0;

    defaultPcmSettings.eChannelMapping[0] = OMX_AUDIO_ChannelLF;
    defaultPcmSettings.eChannelMapping[1] = OMX_AUDIO_ChannelRF;

    for (idx=1; idx<getPortCount(); idx++) {
        mAudioSwitchboardConfig[idx-1].nSize = sizeof(OMX_SYMBIAN_AUDIO_CONFIG_CHANNELSWITCHBOARDTYPE);
        getOmxIlSpecVersion(&mAudioSwitchboardConfig[idx-1].nVersion);
    }

    //Create BinarySplitter Input Port
    binarysplitterPort =
        new BinarySplitter_PcmPort(0,
                                   OMX_DirInput,
                                   mBlockSize * defaultPcmSettings.nChannels * defaultPcmSettings.nBitPerSample/8,
                                   defaultPcmSettings,
                                   *this);

    if (binarysplitterPort == 0) {
        return OMX_ErrorInsufficientResources;
    }

    addPort(binarysplitterPort);

    //Create BinarySplitter Output Ports
    for (idx=1; idx<getPortCount(); idx++) {
        defaultPcmSettings.nPortIndex = idx;
        binarysplitterPort =
            new BinarySplitter_PcmPort(idx,
                                       OMX_DirOutput,
                                       mBlockSize * defaultPcmSettings.nChannels * defaultPcmSettings.nBitPerSample/8,
                                       defaultPcmSettings,
                                       *this);

        if (binarysplitterPort == 0) {
            return OMX_ErrorInsufficientResources;
        }

        addPort(binarysplitterPort);
        mOutConfig[idx - 1] = false;
    }

    for (idx=0; idx<getPortCount(); idx++) {
        AFM_PcmPort *pcmPort = static_cast<AFM_PcmPort *>(getPort(idx));
        if (mIsHost) {
            //pcmPort->forceStandardTunneling();
            pcmPort->setSupportedProprietaryComm(AFM_HOST_PROPRIETARY_COMMUNICATION);
        }
        else {
            pcmPort->setSupportedProprietaryComm(AFM_MPC_PROPRIETARY_COMMUNICATION);
        }
    }

    return OMX_ErrorNone;
}

OMX_ERRORTYPE BinarySplitter::getParameter(
    OMX_INDEXTYPE nParamIndex,
    OMX_PTR pComponentParameterStructure) const
{
    switch (nParamIndex) {
    case AFM_IndexParamPcmLayout:
    {
        AFM_PARAM_PCMLAYOUTTYPE *pcmlayout
        = (AFM_PARAM_PCMLAYOUTTYPE *) pComponentParameterStructure;
        OMX_AUDIO_PARAM_PCMMODETYPE &pcmSettings =
            ((BinarySplitter_PcmPort *) getPort(pcmlayout->nPortIndex))->getPcmSettings();

        pcmlayout->nBlockSize      = DEFAULT_PCM_BLOCKSIZE;
        pcmlayout->nChannels       = pcmSettings.nChannels;
        pcmlayout->nMaxChannels    = 8;
        pcmlayout->nBitsPerSample  = 16;
        pcmlayout->nNbBuffers      = 2;

        //temporary fix for cscall low latency checking..need to confirm
        if (mIsHost == OMX_TRUE) {    // HOST

            if (pcmSettings.nSamplingRate == 8000) {
                pcmlayout->nBlockSize = 160;
            }
            else if (pcmSettings.nSamplingRate == 16000) {
                pcmlayout->nBlockSize = 320;
            }
        }

        return OMX_ErrorNone;
    }

    default:
        return AFM_Component::getParameter(
                   nParamIndex, pComponentParameterStructure);
    }
}

OMX_ERRORTYPE BinarySplitter::setConfig(
    OMX_INDEXTYPE nConfigIndex,
    OMX_PTR pComponentConfigStructure)
{
    switch (nConfigIndex) {

    case OMX_IndexConfigAudioChannelSwitchBoard:
    {
        CHECK_STRUCT_SIZE_AND_VERSION(pComponentConfigStructure,OMX_SYMBIAN_AUDIO_CONFIG_CHANNELSWITCHBOARDTYPE);
        OMX_SYMBIAN_AUDIO_CONFIG_CHANNELSWITCHBOARDTYPE * pConfig =
            (OMX_SYMBIAN_AUDIO_CONFIG_CHANNELSWITCHBOARDTYPE *) pComponentConfigStructure;

        if ( pConfig->nPortIndex == 0 ||
                pConfig->nPortIndex > getPortCount() ) {
            return OMX_ErrorBadPortIndex;
        }

        mAudioSwitchboardConfig[pConfig->nPortIndex-1] = *pConfig;
        mOutConfig[pConfig->nPortIndex-1] = true;

        return OMX_ErrorNone;
    }

    default:
        return AFM_Component::setConfig(
                   nConfigIndex, pComponentConfigStructure);
    }
}


OMX_ERRORTYPE BinarySplitter::getConfig(
    OMX_INDEXTYPE nConfigIndex,
    OMX_PTR pComponentConfigStructure) const
{
    switch (nConfigIndex) {

    case OMX_IndexConfigAudioChannelSwitchBoard:
    {
        CHECK_STRUCT_SIZE_AND_VERSION(pComponentConfigStructure,OMX_SYMBIAN_AUDIO_CONFIG_CHANNELSWITCHBOARDTYPE);
        OMX_SYMBIAN_AUDIO_CONFIG_CHANNELSWITCHBOARDTYPE * pConfig =
            (OMX_SYMBIAN_AUDIO_CONFIG_CHANNELSWITCHBOARDTYPE *) pComponentConfigStructure;

        if ( pConfig->nPortIndex == 0 ||
                pConfig->nPortIndex > getPortCount() ) {
            return OMX_ErrorBadPortIndex;
        }

        *pConfig = mAudioSwitchboardConfig[pConfig->nPortIndex-1];

        return OMX_ErrorNone;
    }

    default:
        return AFM_Component::getConfig(
                   nConfigIndex, pComponentConfigStructure);
    }
}

OMX_U32 BinarySplitter::getUidTopDictionnary(void)
{
    if (mIsHost){
        return KOstBINARY_SPLITTER_HOST_top_ID;
    }
    else{
        return KOstBINARY_SPLITTER_top_ID;
    }
}
