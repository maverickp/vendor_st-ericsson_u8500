/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_stericsson_sdk_equipment_io_usb_internal_USBNativeDevice */

#ifndef _Included_com_stericsson_sdk_equipment_io_usb_internal_USBNativeDevice
#define _Included_com_stericsson_sdk_equipment_io_usb_internal_USBNativeDevice
#ifdef __cplusplus
extern "C" {
#endif
#undef com_stericsson_sdk_equipment_io_usb_internal_USBNativeDevice_DEFAULT_RX_TIMEOUT
#define com_stericsson_sdk_equipment_io_usb_internal_USBNativeDevice_DEFAULT_RX_TIMEOUT 2000L
#undef com_stericsson_sdk_equipment_io_usb_internal_USBNativeDevice_DEFAULT_TX_TIMEOUT
#define com_stericsson_sdk_equipment_io_usb_internal_USBNativeDevice_DEFAULT_TX_TIMEOUT 2000L
/*
 * Class:     com_stericsson_sdk_equipment_io_usb_internal_USBNativeDevice
 * Method:    setCustomConfiguration
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_com_stericsson_sdk_equipment_io_usb_internal_USBNativeDevice_setCustomConfiguration
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     com_stericsson_sdk_equipment_io_usb_internal_USBNativeDevice
 * Method:    open
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_stericsson_sdk_equipment_io_usb_internal_USBNativeDevice_open
  (JNIEnv *, jobject);

/*
 * Class:     com_stericsson_sdk_equipment_io_usb_internal_USBNativeDevice
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_stericsson_sdk_equipment_io_usb_internal_USBNativeDevice_close
  (JNIEnv *, jobject);

/*
 * Class:     com_stericsson_sdk_equipment_io_usb_internal_USBNativeDevice
 * Method:    read
 * Signature: ([BIII)I
 */
JNIEXPORT jint JNICALL Java_com_stericsson_sdk_equipment_io_usb_internal_USBNativeDevice_read
  (JNIEnv *, jobject, jbyteArray, jint, jint, jint);

/*
 * Class:     com_stericsson_sdk_equipment_io_usb_internal_USBNativeDevice
 * Method:    write
 * Signature: ([BIII)I
 */
JNIEXPORT jint JNICALL Java_com_stericsson_sdk_equipment_io_usb_internal_USBNativeDevice_write
  (JNIEnv *, jobject, jbyteArray, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif