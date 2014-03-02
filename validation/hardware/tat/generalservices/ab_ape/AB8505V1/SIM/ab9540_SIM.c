/****************************************************************************
 * File : c:/Lisp/Production/ab9540/ab9540_SIM/Linux/ab9540_SIM.c
 * 
 *
 * Generated on the 13/01/2012 09:19 by the 'super-cool' code generator 
 *
 * Generator written in Common Lisp, created by  Remi PRUD'HOMME - STEricsson 
 * with the help of : 
 *
 ***************************************************************************
 *  Copyright STEricsson  2012
 *
 *  Reference document : User Manual ref : CD00291561 Rev 3, May 2011
 *
 ***************************************************************************/

// This file is generated. Don't modify it 

#ifndef C__LISP_PRODUCTION_AB9540_AB9540_SIM_LINUX_AB9540_SIM_C
#define C__LISP_PRODUCTION_AB9540_AB9540_SIM_LINUX_AB9540_SIM_C


#ifdef __cplusplus
extern "C" {
#endif
#include "ab9540_SIM.h"

extern unsigned char I2CRead( unsigned short register_address);
extern void I2CWrite( unsigned short register_address, unsigned char data );


/***************************************************************************
 *
 * Function : set_counter_reset
 *
 * IN   : param, a value to write to the regiter SimInterfaceControl
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimInterfaceControl
 *
 * Notes : From register 0x480, bits 0:0
 *
 **************************************************************************/
unsigned char set_counter_reset( enum counter_reset param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_INTERFACE_CONTROL_REG);

    /* 
     * 0: Counter reset inactive 
     * 1: Counter reset active 
     */ 
    switch( param ){
        case COUNTER_RESET_E: 
           value = old_value | COUNTER_RESET_MASK; 
           break;
        case COUNTER_UN_RESET_E: 
           value = old_value & ~ COUNTER_RESET_MASK;
           break;
    }
  

    I2CWrite(SIM_INTERFACE_CONTROL_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_counter_reset
 *
 * RET  : Return the value of register 0xSimInterfaceControl
 *
 * Notes : From register 0x480, bits 0:0
 *
 **************************************************************************/
unsigned char get_counter_reset()
  {
    unsigned char value;


    /* 
     * 0: Counter reset inactive 
     * 1: Counter reset active 
     */ 
    value = (I2CRead(SIM_INTERFACE_CONTROL_REG) & COUNTER_RESET_MASK);
    return value;
  }


/***************************************************************************
 *
 * Function : set_card_clock_selected
 *
 * IN   : param, a value to write to the regiter SimInterfaceControl
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimInterfaceControl
 *
 * Notes : From register 0x480, bits 1:1
 *
 **************************************************************************/
unsigned char set_card_clock_selected( enum card_clock_selected param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_INTERFACE_CONTROL_REG);

    /* 
     * 0: SIMIfClk/2 not selected to counter 
     * 1: SIMIfClk/2 selected to counter 
     */ 
    switch( param ){
        case CARD_CLOCK_SELECT_E: 
           value = old_value | CARD_CLOCK_SELECTED_MASK; 
           break;
        case CARD_CLOCK_UN_SELECT_E: 
           value = old_value & ~ CARD_CLOCK_SELECTED_MASK;
           break;
    }
  

    I2CWrite(SIM_INTERFACE_CONTROL_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_card_clock_selected
 *
 * RET  : Return the value of register 0xSimInterfaceControl
 *
 * Notes : From register 0x480, bits 1:1
 *
 **************************************************************************/
unsigned char get_card_clock_selected()
  {
    unsigned char value;


    /* 
     * 0: SIMIfClk/2 not selected to counter 
     * 1: SIMIfClk/2 selected to counter 
     */ 
    value = (I2CRead(SIM_INTERFACE_CONTROL_REG) & CARD_CLOCK_SELECTED_MASK) >> 1;
    return value;
  }


/***************************************************************************
 *
 * Function : set_clock32_selected
 *
 * IN   : param, a value to write to the regiter SimInterfaceControl
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimInterfaceControl
 *
 * Notes : From register 0x480, bits 2:2
 *
 **************************************************************************/
unsigned char set_clock32_selected( enum clock32_selected param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_INTERFACE_CONTROL_REG);

    /* 
     * 0: Clk32k not selected to counter 
     * 1: Clk32k selected to counter 
     */ 
    switch( param ){
        case CLOCK_32_SELECT_E: 
           value = old_value | CLOCK_32_SELECTED_MASK; 
           break;
        case CLOCK_32_UN_SELECT_E: 
           value = old_value & ~ CLOCK_32_SELECTED_MASK;
           break;
    }
  

    I2CWrite(SIM_INTERFACE_CONTROL_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_clock32_selected
 *
 * RET  : Return the value of register 0xSimInterfaceControl
 *
 * Notes : From register 0x480, bits 2:2
 *
 **************************************************************************/
unsigned char get_clock32_selected()
  {
    unsigned char value;


    /* 
     * 0: Clk32k not selected to counter 
     * 1: Clk32k selected to counter 
     */ 
    value = (I2CRead(SIM_INTERFACE_CONTROL_REG) & CLOCK_32_SELECTED_MASK) >> 2;
    return value;
  }


/***************************************************************************
 *
 * Function : set_sim_power_on
 *
 * IN   : param, a value to write to the regiter SimInterfaceControl
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimInterfaceControl
 *
 * Notes : From register 0x480, bits 3:3
 *
 **************************************************************************/
unsigned char set_sim_power_on( enum sim_power_on param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_INTERFACE_CONTROL_REG);

    /* 
     * 0: SIM power off by MCU 
     * 1: SIM power on by MCU 
     */ 
    switch( param ){
        case SIM_POWER_ON_E: 
           value = old_value | SIM_POWER_ON_MASK; 
           break;
        case SIM_POWER_OFF_E: 
           value = old_value & ~ SIM_POWER_ON_MASK;
           break;
    }
  

    I2CWrite(SIM_INTERFACE_CONTROL_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_sim_power_on
 *
 * RET  : Return the value of register 0xSimInterfaceControl
 *
 * Notes : From register 0x480, bits 3:3
 *
 **************************************************************************/
unsigned char get_sim_power_on()
  {
    unsigned char value;


    /* 
     * 0: SIM power off by MCU 
     * 1: SIM power on by MCU 
     */ 
    value = (I2CRead(SIM_INTERFACE_CONTROL_REG) & SIM_POWER_ON_MASK) >> 3;
    return value;
  }


/***************************************************************************
 *
 * Function : set_internally_reset
 *
 * IN   : param, a value to write to the regiter SimInterfaceControl
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimInterfaceControl
 *
 * Notes : From register 0x480, bits 4:4
 *
 **************************************************************************/
unsigned char set_internally_reset( enum internally_reset param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_INTERFACE_CONTROL_REG);

    /* 
     * An externally reset card 
     * 1: An internally reset card 
     */ 
    switch( param ){
        case INTERNALLY_RESET_CARD_E: 
           value = old_value | INTERNALLY_RESET_MASK; 
           break;
        case EXTERNALLY_RESET_CARD_E: 
           value = old_value & ~ INTERNALLY_RESET_MASK;
           break;
    }
  

    I2CWrite(SIM_INTERFACE_CONTROL_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_internally_reset
 *
 * RET  : Return the value of register 0xSimInterfaceControl
 *
 * Notes : From register 0x480, bits 4:4
 *
 **************************************************************************/
unsigned char get_internally_reset()
  {
    unsigned char value;


    /* 
     * An externally reset card 
     * 1: An internally reset card 
     */ 
    value = (I2CRead(SIM_INTERFACE_CONTROL_REG) & INTERNALLY_RESET_MASK) >> 4;
    return value;
  }


/***************************************************************************
 *
 * Function : set_warm_reset
 *
 * IN   : param, a value to write to the regiter SimInterfaceControl
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimInterfaceControl
 *
 * Notes : From register 0x480, bits 5:5
 *
 **************************************************************************/
unsigned char set_warm_reset( enum warm_reset_enable param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_INTERFACE_CONTROL_REG);

    /* 
     * 0: Warm reset of the card is NOT active 
     * 1: Warm reset of the card active 
     */ 
    switch( param ){
        case WARM_RESET_ENABLE_E: 
           value = old_value | WARM_RESET_MASK; 
           break;
        case WARM_RESET_DISABLE_E: 
           value = old_value & ~ WARM_RESET_MASK;
           break;
    }
  

    I2CWrite(SIM_INTERFACE_CONTROL_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_warm_reset
 *
 * RET  : Return the value of register 0xSimInterfaceControl
 *
 * Notes : From register 0x480, bits 5:5
 *
 **************************************************************************/
unsigned char get_warm_reset()
  {
    unsigned char value;


    /* 
     * 0: Warm reset of the card is NOT active 
     * 1: Warm reset of the card active 
     */ 
    value = (I2CRead(SIM_INTERFACE_CONTROL_REG) & WARM_RESET_MASK) >> 5;
    return value;
  }


/***************************************************************************
 *
 * Function : set_reset_duration
 *
 * IN   : param, a value to write to the regiter SimInterfaceControl
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimInterfaceControl
 *
 * Notes : From register 0x480, bits 6:6
 *
 **************************************************************************/
unsigned char set_reset_duration( enum reset_duration param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_INTERFACE_CONTROL_REG);

    /* 
     * 0: SIM reset active 400 card clock cycles after the clock 
     * is applied 
     * 1: SIM reset active 40000 card clock cycles after the 
     * clock is applied 
     */ 
    switch( param ){
        case ACTIVE_40000_CARD_CLOCK_E: 
           value = old_value | RESET_DURATION_MASK; 
           break;
        case ACTIVE_400_CARD_CLOCK_E: 
           value = old_value & ~ RESET_DURATION_MASK;
           break;
    }
  

    I2CWrite(SIM_INTERFACE_CONTROL_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_reset_duration
 *
 * RET  : Return the value of register 0xSimInterfaceControl
 *
 * Notes : From register 0x480, bits 6:6
 *
 **************************************************************************/
unsigned char get_reset_duration()
  {
    unsigned char value;


    /* 
     * 0: SIM reset active 400 card clock cycles after the clock 
     * is applied 
     * 1: SIM reset active 40000 card clock cycles after the 
     * clock is applied 
     */ 
    value = (I2CRead(SIM_INTERFACE_CONTROL_REG) & RESET_DURATION_MASK) >> 6;
    return value;
  }


/***************************************************************************
 *
 * Function : set_power_down_procedure
 *
 * IN   : param, a value to write to the regiter SimInterfaceControl
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimInterfaceControl
 *
 * Notes : From register 0x480, bits 7:7
 *
 **************************************************************************/
unsigned char set_power_down_procedure( enum powe_down_procedure_enable param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_INTERFACE_CONTROL_REG);

    /* 
     * 0: If ATRErrInt is generated, power down procedure is 
     * activated (card powered down) 
     * 1: If ATRErrInt is generated, power down procedure is NOT 
     * activated 
     */ 
    switch( param ){
        case POWE_DOWN_PROCEDURE_ENABLE_E: 
           value = old_value | POWER_DOWN_PROCEDURE_MASK; 
           break;
        case POWE_DOWN_PROCEDURE_DISABLE_E: 
           value = old_value & ~ POWER_DOWN_PROCEDURE_MASK;
           break;
    }
  

    I2CWrite(SIM_INTERFACE_CONTROL_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_power_down_procedure
 *
 * RET  : Return the value of register 0xSimInterfaceControl
 *
 * Notes : From register 0x480, bits 7:7
 *
 **************************************************************************/
unsigned char get_power_down_procedure()
  {
    unsigned char value;


    /* 
     * 0: If ATRErrInt is generated, power down procedure is 
     * activated (card powered down) 
     * 1: If ATRErrInt is generated, power down procedure is NOT 
     * activated 
     */ 
    value = (I2CRead(SIM_INTERFACE_CONTROL_REG) & POWER_DOWN_PROCEDURE_MASK) >> 7;
    return value;
  }


/***************************************************************************
 *
 * Function : get_card_detection_timeout
 *
 * RET  : Return the value of register 0xCardDetectionTimeout
 *
 * Notes : From register 0x481, bits 7:0
 *
 **************************************************************************/
unsigned char get_card_detection_timeout()
  {
    unsigned char value;


    /* 
     * Get the value from a register 
     */ 
   value = I2CRead(CARD_DETECTION_TIMEOUT_REG) ;
    return value;
  }


/***************************************************************************
 *
 * Function : set_card_detection_timeout
 *
 * IN   : param, a value to write to the regiter CardDetectionTimeout
 * OUT  : 
 *
 * RET  : Return the value of register 0xCardDetectionTimeout
 *
 * Notes : From register 0x481, bits 7:0
 *
 **************************************************************************/
unsigned char set_card_detection_timeout( unsigned char param )
  {
    unsigned char value;

    value = I2CRead(CARD_DETECTION_TIMEOUT_REG);

    /* 
     * Set the value to a register 
     */ 
    I2CWrite(CARD_DETECTION_TIMEOUT_REG, param);
    return value;

  }


/***************************************************************************
 *
 * Function : get_comp_value_low_byte
 *
 * RET  : Return the value of register 0xCompValueLowByte
 *
 * Notes : From register 0x482, bits 7:0
 *
 **************************************************************************/
unsigned char get_comp_value_low_byte()
  {
    unsigned char value;


    /* 
     * Get the value from a register 
     */ 
   value = I2CRead(COMP_VALUE_LOW_BYTE_REG) ;
    return value;
  }


/***************************************************************************
 *
 * Function : set_comp_value_low_byte
 *
 * IN   : param, a value to write to the regiter CompValueLowByte
 * OUT  : 
 *
 * RET  : Return the value of register 0xCompValueLowByte
 *
 * Notes : From register 0x482, bits 7:0
 *
 **************************************************************************/
unsigned char set_comp_value_low_byte( unsigned char param )
  {
    unsigned char value;

    value = I2CRead(COMP_VALUE_LOW_BYTE_REG);

    /* 
     * Set the value to a register 
     */ 
    I2CWrite(COMP_VALUE_LOW_BYTE_REG, param);
    return value;

  }


/***************************************************************************
 *
 * Function : get_comp_value_high_byte
 *
 * RET  : Return the value of register 0xCompValueHighByte
 *
 * Notes : From register 0x483, bits 7:0
 *
 **************************************************************************/
unsigned char get_comp_value_high_byte()
  {
    unsigned char value;


    /* 
     * Get the value from a register 
     */ 
   value = I2CRead(COMP_VALUE_HIGH_BYTE_REG) ;
    return value;
  }


/***************************************************************************
 *
 * Function : set_comp_value_high_byte
 *
 * IN   : param, a value to write to the regiter CompValueHighByte
 * OUT  : 
 *
 * RET  : Return the value of register 0xCompValueHighByte
 *
 * Notes : From register 0x483, bits 7:0
 *
 **************************************************************************/
unsigned char set_comp_value_high_byte( unsigned char param )
  {
    unsigned char value;

    value = I2CRead(COMP_VALUE_HIGH_BYTE_REG);

    /* 
     * Set the value to a register 
     */ 
    I2CWrite(COMP_VALUE_HIGH_BYTE_REG, param);
    return value;

  }


/***************************************************************************
 *
 * Function : set_sim_io_normal
 *
 * IN   : param, a value to write to the regiter SimSupplyManagement
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimSupplyManagement
 *
 * Notes : From register 0x484, bits 0:0
 *
 **************************************************************************/
unsigned char set_sim_io_normal( enum sim_io_normal param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_SUPPLY_MANAGEMENT_REG);

    /* 
     * 0: SIM interface in normal use 
     * 1: ISO-UICC disabled, SIM IOs gen. purpose outputs 
     */ 
    switch( param ){
        case GENERAL_PURPOSE_OUTPUT_E: 
           value = old_value | SIM_IO_NORMAL_MASK; 
           break;
        case SIM_INTERFACE_NORMAL_USE_E: 
           value = old_value & ~ SIM_IO_NORMAL_MASK;
           break;
    }
  

    I2CWrite(SIM_SUPPLY_MANAGEMENT_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_sim_io_normal
 *
 * RET  : Return the value of register 0xSimSupplyManagement
 *
 * Notes : From register 0x484, bits 0:0
 *
 **************************************************************************/
unsigned char get_sim_io_normal()
  {
    unsigned char value;


    /* 
     * 0: SIM interface in normal use 
     * 1: ISO-UICC disabled, SIM IOs gen. purpose outputs 
     */ 
    value = (I2CRead(SIM_SUPPLY_MANAGEMENT_REG) & SIM_IO_NORMAL_MASK);
    return value;
  }


/***************************************************************************
 *
 * Function : set_vsim_voltage
 *
 * IN   : param, a value to write to the regiter SimSupplyManagement
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimSupplyManagement
 *
 * Notes : From register 0x484, bits 2:1
 *
 **************************************************************************/
unsigned char set_vsim_voltage( enum vsim_voltage param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_SUPPLY_MANAGEMENT_REG);

    /* 
     * 00: VSIM1 voltage level 1.2V 
     * 01: VSIM1 voltage level 1.8V 
     * 10: VSIM1 voltage level 3.0V 
     */ 
  

     value =  old_value & ~VSIM_VOLTAGE_MASK ;

    switch(  param ){

           case LEVEL_1_POINT_2V_E:
                value  = value  | (LEVEL_1_POINT_2V << 0x1);
                break;
           case LEVEL_1_POINT_8V_E:
                value  = value  | (LEVEL_1_POINT_8V << 0x1);
                break;
           case LEVEL_3V_E:
                value  = value  | (LEVEL_3V << 0x1);
                break;
    }
  

    I2CWrite(SIM_SUPPLY_MANAGEMENT_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_vsim_voltage
 *
 * RET  : Return the value of register 0xSimSupplyManagement
 *
 * Notes : From register 0x484, bits 2:1
 *
 **************************************************************************/
unsigned char get_vsim_voltage()
  {
    unsigned char value;


    /* 
     * 00: VSIM1 voltage level 1.2V 
     * 01: VSIM1 voltage level 1.8V 
     * 10: VSIM1 voltage level 3.0V 
     */ 
    value = (I2CRead(SIM_SUPPLY_MANAGEMENT_REG) & VSIM_VOLTAGE_MASK) >> 1;
    return value;
  }


/***************************************************************************
 *
 * Function : set_vsim_regulator
 *
 * IN   : param, a value to write to the regiter SimSupplyManagement
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimSupplyManagement
 *
 * Notes : From register 0x484, bits 3:3
 *
 **************************************************************************/
unsigned char set_vsim_regulator( enum vsim_regulator param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_SUPPLY_MANAGEMENT_REG);

    /* 
     * 0: VSIM regulator follows start-up order 
     * 1: VSIM regulator always on 
     */ 
    switch( param ){
        case REGULATOR_ALWAYS_ON_E: 
           value = old_value | VSIM_REGULATOR_MASK; 
           break;
        case REGULATOR_FOLLOWS_START_UP_ORDER_E: 
           value = old_value & ~ VSIM_REGULATOR_MASK;
           break;
    }
  

    I2CWrite(SIM_SUPPLY_MANAGEMENT_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_vsim_regulator
 *
 * RET  : Return the value of register 0xSimSupplyManagement
 *
 * Notes : From register 0x484, bits 3:3
 *
 **************************************************************************/
unsigned char get_vsim_regulator()
  {
    unsigned char value;


    /* 
     * 0: VSIM regulator follows start-up order 
     * 1: VSIM regulator always on 
     */ 
    value = (I2CRead(SIM_SUPPLY_MANAGEMENT_REG) & VSIM_REGULATOR_MASK) >> 3;
    return value;
  }


/***************************************************************************
 *
 * Function : set_removal_detection
 *
 * IN   : param, a value to write to the regiter SimSupplyManagement
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimSupplyManagement
 *
 * Notes : From register 0x484, bits 4:4
 *
 **************************************************************************/
unsigned char set_removal_detection( enum removal_detection param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_SUPPLY_MANAGEMENT_REG);

    /* 
     * 0: SIMIf detects removal from BatCtrl only 
     * 1: SIMIf detects removal from SIMCarDetX also 
     */ 
    switch( param ){
        case REMOVAL_FROM_SIMCARDETX_ALSO_E: 
           value = old_value | REMOVAL_DETECTION_MASK; 
           break;
        case REMOVAL_FROM_BATCTRL_ONLY_E: 
           value = old_value & ~ REMOVAL_DETECTION_MASK;
           break;
    }
  

    I2CWrite(SIM_SUPPLY_MANAGEMENT_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_removal_detection
 *
 * RET  : Return the value of register 0xSimSupplyManagement
 *
 * Notes : From register 0x484, bits 4:4
 *
 **************************************************************************/
unsigned char get_removal_detection()
  {
    unsigned char value;


    /* 
     * 0: SIMIf detects removal from BatCtrl only 
     * 1: SIMIf detects removal from SIMCarDetX also 
     */ 
    value = (I2CRead(SIM_SUPPLY_MANAGEMENT_REG) & REMOVAL_DETECTION_MASK) >> 4;
    return value;
  }


/***************************************************************************
 *
 * Function : set_sim_comp_detection
 *
 * IN   : param, a value to write to the regiter SimSupplyManagement
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimSupplyManagement
 *
 * Notes : From register 0x484, bits 5:5
 *
 **************************************************************************/
unsigned char set_sim_comp_detection( enum comparator_enabled param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_SUPPLY_MANAGEMENT_REG);

    /* 
     * 0: SIMCardDetX comparator disabled 
     * 1: SIMCardDetX comparator enabled 
     */ 
    switch( param ){
        case COMPARATOR_ENABLE_E: 
           value = old_value | SIM_COMP_DETECTION_MASK; 
           break;
        case COMPARATOR_DISABLE_E: 
           value = old_value & ~ SIM_COMP_DETECTION_MASK;
           break;
    }
  

    I2CWrite(SIM_SUPPLY_MANAGEMENT_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_sim_comp_detection
 *
 * RET  : Return the value of register 0xSimSupplyManagement
 *
 * Notes : From register 0x484, bits 5:5
 *
 **************************************************************************/
unsigned char get_sim_comp_detection()
  {
    unsigned char value;


    /* 
     * 0: SIMCardDetX comparator disabled 
     * 1: SIMCardDetX comparator enabled 
     */ 
    value = (I2CRead(SIM_SUPPLY_MANAGEMENT_REG) & SIM_COMP_DETECTION_MASK) >> 5;
    return value;
  }


/***************************************************************************
 *
 * Function : set_sim_da_pull_up
 *
 * IN   : param, a value to write to the regiter SimSupplyManagement
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimSupplyManagement
 *
 * Notes : From register 0x484, bits 6:6
 *
 **************************************************************************/
unsigned char set_sim_da_pull_up( enum sim_da_pull_up param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_SUPPLY_MANAGEMENT_REG);

    /* 
     * 0: SIMDa pull up is R1 only 
     * 1: SIMDa pull up is R1 + R2 
     */ 
    switch( param ){
        case BY_R1_PLUS_R2_E: 
           value = old_value | SIM_DA_PULL_UP_MASK; 
           break;
        case BY_R1_ONLY_E: 
           value = old_value & ~ SIM_DA_PULL_UP_MASK;
           break;
    }
  

    I2CWrite(SIM_SUPPLY_MANAGEMENT_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_sim_da_pull_up
 *
 * RET  : Return the value of register 0xSimSupplyManagement
 *
 * Notes : From register 0x484, bits 6:6
 *
 **************************************************************************/
unsigned char get_sim_da_pull_up()
  {
    unsigned char value;


    /* 
     * 0: SIMDa pull up is R1 only 
     * 1: SIMDa pull up is R1 + R2 
     */ 
    value = (I2CRead(SIM_SUPPLY_MANAGEMENT_REG) & SIM_DA_PULL_UP_MASK) >> 6;
    return value;
  }


/***************************************************************************
 *
 * Function : set_vsim_active_mode
 *
 * IN   : param, a value to write to the regiter SimSupplyManagement
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimSupplyManagement
 *
 * Notes : From register 0x484, bits 7:7
 *
 **************************************************************************/
unsigned char set_vsim_active_mode( enum vsim_active_mode param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_SUPPLY_MANAGEMENT_REG);

    /* 
     * 0: VSIM controlled by SleepX (if VSIM is on) 
     * 1: VSIM always in active mode (if VSIM is on) 
     */ 
    switch( param ){
        case VSIM_ALWAYS_ACTIVE_MODE_E: 
           value = old_value | VSIM_ACTIVE_MODE_MASK; 
           break;
        case VSIM_CONTROLLED_BY_SLEEPX_E: 
           value = old_value & ~ VSIM_ACTIVE_MODE_MASK;
           break;
    }
  

    I2CWrite(SIM_SUPPLY_MANAGEMENT_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_vsim_active_mode
 *
 * RET  : Return the value of register 0xSimSupplyManagement
 *
 * Notes : From register 0x484, bits 7:7
 *
 **************************************************************************/
unsigned char get_vsim_active_mode()
  {
    unsigned char value;


    /* 
     * 0: VSIM controlled by SleepX (if VSIM is on) 
     * 1: VSIM always in active mode (if VSIM is on) 
     */ 
    value = (I2CRead(SIM_SUPPLY_MANAGEMENT_REG) & VSIM_ACTIVE_MODE_MASK) >> 7;
    return value;
  }


/***************************************************************************
 *
 * Function : set_select_vsim_power
 *
 * IN   : param, a value to write to the regiter SimSupplyManagement2
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimSupplyManagement2
 *
 * Notes : From register 0x485, bits 0:0
 *
 **************************************************************************/
unsigned char set_select_vsim_power( enum select_vsim_power param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_SUPPLY_MANAGEMENT_2_REG);

    /* 
     * 0: Select VbatVsim ball to supply Vsim LDO 
     * 1: Select VinVsim ball to supply Vsim LDO 
     */ 
    switch( param ){
        case SELECT_VIN_E: 
           value = old_value | SELECT_VSIM_POWER_MASK; 
           break;
        case SELECT_VBAT_E: 
           value = old_value & ~ SELECT_VSIM_POWER_MASK;
           break;
    }
  

    I2CWrite(SIM_SUPPLY_MANAGEMENT_2_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_select_vsim_power
 *
 * RET  : Return the value of register 0xSimSupplyManagement2
 *
 * Notes : From register 0x485, bits 0:0
 *
 **************************************************************************/
unsigned char get_select_vsim_power()
  {
    unsigned char value;


    /* 
     * 0: Select VbatVsim ball to supply Vsim LDO 
     * 1: Select VinVsim ball to supply Vsim LDO 
     */ 
    value = (I2CRead(SIM_SUPPLY_MANAGEMENT_2_REG) & SELECT_VSIM_POWER_MASK);
    return value;
  }


/***************************************************************************
 *
 * Function : set_sim_card_det_polarity
 *
 * IN   : param, a value to write to the regiter SimSupplyManagement2
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimSupplyManagement2
 *
 * Notes : From register 0x485, bits 1:1
 *
 **************************************************************************/
unsigned char set_sim_card_det_polarity( enum switch_open param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_SUPPLY_MANAGEMENT_2_REG);

    /* 
     * 0: No Card plug : CUiccDetect ball is PullUp to Battery 
     * ;Card plug ; CUiccDetect ball is grounded (Switch Closed) 
     * 1: No Card plug : CUiccDetect ball is grouded Card plug ; 
     * CUiccDetect ball is PullUp to Battery (Switch Open) 
     */ 
    switch( param ){
        case SWITCH_OPEN_E: 
           value = old_value | SIM_CARD_DET_POLARITY_MASK; 
           break;
        case SWITCH_CLOSE_E: 
           value = old_value & ~ SIM_CARD_DET_POLARITY_MASK;
           break;
    }
  

    I2CWrite(SIM_SUPPLY_MANAGEMENT_2_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_sim_card_det_polarity
 *
 * RET  : Return the value of register 0xSimSupplyManagement2
 *
 * Notes : From register 0x485, bits 1:1
 *
 **************************************************************************/
unsigned char get_sim_card_det_polarity()
  {
    unsigned char value;


    /* 
     * 0: No Card plug : CUiccDetect ball is PullUp to Battery 
     * ;Card plug ; CUiccDetect ball is grounded (Switch Closed) 
     * 1: No Card plug : CUiccDetect ball is grouded Card plug ; 
     * CUiccDetect ball is PullUp to Battery (Switch Open) 
     */ 
    value = (I2CRead(SIM_SUPPLY_MANAGEMENT_2_REG) & SIM_CARD_DET_POLARITY_MASK) >> 1;
    return value;
  }


/***************************************************************************
 *
 * Function : set_usim_power
 *
 * IN   : param, a value to write to the regiter SimIfContol
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimIfContol
 *
 * Notes : From register 0x489, bits 0:0
 *
 **************************************************************************/
unsigned char set_usim_power( enum usim_power_on param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_IF_CONTOL_REG);

    /* 
     * 0: USB SIM not in use. (VSIM powered down, weak pull-down 
     * activated and strong pull-down 
     * activated when VSIM voltage low) 
     * 1: USB SIM powered up (VSIM Powered up, all put-downs 
     * released 
     */ 
    switch( param ){
        case USIM_POWER_ON_E: 
           value = old_value | USIM_POWER_MASK; 
           break;
        case USIM_POWER_OFF_E: 
           value = old_value & ~ USIM_POWER_MASK;
           break;
    }
  

    I2CWrite(SIM_IF_CONTOL_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_usim_power
 *
 * RET  : Return the value of register 0xSimIfContol
 *
 * Notes : From register 0x489, bits 0:0
 *
 **************************************************************************/
unsigned char get_usim_power()
  {
    unsigned char value;


    /* 
     * 0: USB SIM not in use. (VSIM powered down, weak pull-down 
     * activated and strong pull-down 
     * activated when VSIM voltage low) 
     * 1: USB SIM powered up (VSIM Powered up, all put-downs 
     * released 
     */ 
    value = (I2CRead(SIM_IF_CONTOL_REG) & USIM_POWER_MASK);
    return value;
  }


/***************************************************************************
 *
 * Function : set_usim_load
 *
 * IN   : param, a value to write to the regiter SimIfContol
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimIfContol
 *
 * Notes : From register 0x489, bits 1:1
 *
 **************************************************************************/
unsigned char set_usim_load( enum usim_load param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_IF_CONTOL_REG);

    /* 
     * 0: Data line load less then 21pF 
     * 1: Data line load 21-30pF 
     */ 
    switch( param ){
        case ABOVE_21_PF_E: 
           value = old_value | USIM_LOAD_MASK; 
           break;
        case UNDER_21_PF_E: 
           value = old_value & ~ USIM_LOAD_MASK;
           break;
    }
  

    I2CWrite(SIM_IF_CONTOL_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_usim_load
 *
 * RET  : Return the value of register 0xSimIfContol
 *
 * Notes : From register 0x489, bits 1:1
 *
 **************************************************************************/
unsigned char get_usim_load()
  {
    unsigned char value;


    /* 
     * 0: Data line load less then 21pF 
     * 1: Data line load 21-30pF 
     */ 
    value = (I2CRead(SIM_IF_CONTOL_REG) & USIM_LOAD_MASK) >> 1;
    return value;
  }


/***************************************************************************
 *
 * Function : set_sim_reset_control
 *
 * IN   : param, a value to write to the regiter SimIfContol
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimIfContol
 *
 * Notes : From register 0x489, bits 2:2
 *
 **************************************************************************/
unsigned char set_sim_reset_control( enum sim_reset_control param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_IF_CONTOL_REG);

    /* 
     * 0: CIsoReset ball controlled by traditional SIM IF 
     * 1: CIsoreset ball driven by Simrst value 
     */ 
    switch( param ){
        case DRIVEN_HIGH_E: 
           value = old_value | SIM_RESET_CONTROL_MASK; 
           break;
        case CONTROLLED_BY_SIM_IF_E: 
           value = old_value & ~ SIM_RESET_CONTROL_MASK;
           break;
    }
  

    I2CWrite(SIM_IF_CONTOL_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_sim_reset_control
 *
 * RET  : Return the value of register 0xSimIfContol
 *
 * Notes : From register 0x489, bits 2:2
 *
 **************************************************************************/
unsigned char get_sim_reset_control()
  {
    unsigned char value;


    /* 
     * 0: CIsoReset ball controlled by traditional SIM IF 
     * 1: CIsoreset ball driven by Simrst value 
     */ 
    value = (I2CRead(SIM_IF_CONTOL_REG) & SIM_RESET_CONTROL_MASK) >> 2;
    return value;
  }


/***************************************************************************
 *
 * Function : set_usim_by_pass
 *
 * IN   : param, a value to write to the regiter SimIfContol
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimIfContol
 *
 * Notes : From register 0x489, bits 3:3
 *
 **************************************************************************/
unsigned char set_usim_by_pass( enum usim_by_pass param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_IF_CONTOL_REG);

    /* 
     * 0: USB SIM in normal use 
     * 1: All decoding logic and single-ended zero filter 
     * bypassed. Only data drivers in use. 
     */ 
    switch( param ){
        case NORMAL_USE_E: 
           value = old_value | USIM_BY_PASS_MASK; 
           break;
        case ALL_DECODING_LOGIG_BYPASSED_E: 
           value = old_value & ~ USIM_BY_PASS_MASK;
           break;
    }
  

    I2CWrite(SIM_IF_CONTOL_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_usim_by_pass
 *
 * RET  : Return the value of register 0xSimIfContol
 *
 * Notes : From register 0x489, bits 3:3
 *
 **************************************************************************/
unsigned char get_usim_by_pass()
  {
    unsigned char value;


    /* 
     * 0: USB SIM in normal use 
     * 1: All decoding logic and single-ended zero filter 
     * bypassed. Only data drivers in use. 
     */ 
    value = (I2CRead(SIM_IF_CONTOL_REG) & USIM_BY_PASS_MASK) >> 3;
    return value;
  }


/***************************************************************************
 *
 * Function : set_sim_reset_value
 *
 * IN   : param, a value to write to the regiter SimIfContol
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimIfContol
 *
 * Notes : From register 0x489, bits 4:4
 *
 **************************************************************************/
unsigned char set_sim_reset_value( enum sim_reset_value param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_IF_CONTOL_REG);

    /* 
     * 0: CIsoReset pad driven low if Simrst_force=1 
     * 1: CIsoReset pad driven high if Simrst_force 
     */ 
    switch( param ){
        case RESET_DRIVEN_HIGH_E: 
           value = old_value | SIM_RESET_VALUE_MASK; 
           break;
        case RESET_DRIVEN_LOW_E: 
           value = old_value & ~ SIM_RESET_VALUE_MASK;
           break;
    }
  

    I2CWrite(SIM_IF_CONTOL_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_sim_reset_value
 *
 * RET  : Return the value of register 0xSimIfContol
 *
 * Notes : From register 0x489, bits 4:4
 *
 **************************************************************************/
unsigned char get_sim_reset_value()
  {
    unsigned char value;


    /* 
     * 0: CIsoReset pad driven low if Simrst_force=1 
     * 1: CIsoReset pad driven high if Simrst_force 
     */ 
    value = (I2CRead(SIM_IF_CONTOL_REG) & SIM_RESET_VALUE_MASK) >> 4;
    return value;
  }


/***************************************************************************
 *
 * Function : set_weak_pull_down
 *
 * IN   : param, a value to write to the regiter SimIfContol
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimIfContol
 *
 * Notes : From register 0x489, bits 5:5
 *
 **************************************************************************/
unsigned char set_weak_pull_down( enum weak_pull_down param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_IF_CONTOL_REG);

    /* 
     * 0: USB-UICC data lines weak pull down active 
     * 1: USB-UICC data lines weak pull down not active 
     */ 
    switch( param ){
        case WEAK_PULL_DOWN_NOT_ACTIVE_E: 
           value = old_value | WEAK_PULL_DOWN_MASK; 
           break;
        case WEAK_PULL_DOWN_ACTIVE_E: 
           value = old_value & ~ WEAK_PULL_DOWN_MASK;
           break;
    }
  

    I2CWrite(SIM_IF_CONTOL_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_weak_pull_down
 *
 * RET  : Return the value of register 0xSimIfContol
 *
 * Notes : From register 0x489, bits 5:5
 *
 **************************************************************************/
unsigned char get_weak_pull_down()
  {
    unsigned char value;


    /* 
     * 0: USB-UICC data lines weak pull down active 
     * 1: USB-UICC data lines weak pull down not active 
     */ 
    value = (I2CRead(SIM_IF_CONTOL_REG) & WEAK_PULL_DOWN_MASK) >> 5;
    return value;
  }


/***************************************************************************
 *
 * Function : set_sim_delay
 *
 * IN   : param, a value to write to the regiter SimDelay
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimDelay
 *
 * Notes : From register 0x48A, bits 2:0
 *
 **************************************************************************/
unsigned char set_sim_delay( enum sim_delay param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_DELAY_REG);

    /* 
     * Sim Ad Delay 
     */ 
  
    value =  old_value & ~SIM_DELAY_MASK;


    value |=  param ;  
    I2CWrite(SIM_DELAY_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_sim_delay
 *
 * RET  : Return the value of register 0xSimDelay
 *
 * Notes : From register 0x48A, bits 2:0
 *
 **************************************************************************/
unsigned char get_sim_delay()
  {
    unsigned char value;


    /* 
     * Sim Ad Delay 
     */ 
    value = (I2CRead(SIM_DELAY_REG) & SIM_DELAY_MASK);
    return value;
  }


/***************************************************************************
 *
 * Function : set_filter_active
 *
 * IN   : param, a value to write to the regiter SimDelay
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimDelay
 *
 * Notes : From register 0x48A, bits 3:3
 *
 **************************************************************************/
unsigned char set_filter_active( enum filter_enable param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_DELAY_REG);

    /* 
     * 0:Filter active 
     * 1:Filter disabled (bypass) 
     */ 
    switch( param ){
        case FILTER_ENABLE_E: 
           value = old_value | FILTER_ACTIVE_MASK; 
           break;
        case FILTER_DISABLE_E: 
           value = old_value & ~ FILTER_ACTIVE_MASK;
           break;
    }
  

    I2CWrite(SIM_DELAY_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_filter_active
 *
 * RET  : Return the value of register 0xSimDelay
 *
 * Notes : From register 0x48A, bits 3:3
 *
 **************************************************************************/
unsigned char get_filter_active()
  {
    unsigned char value;


    /* 
     * 0:Filter active 
     * 1:Filter disabled (bypass) 
     */ 
    value = (I2CRead(SIM_DELAY_REG) & FILTER_ACTIVE_MASK) >> 3;
    return value;
  }


/***************************************************************************
 *
 * Function : set_v_mod_select
 *
 * IN   : param, a value to write to the regiter SimSupplyManagement3
 * OUT  : 
 *
 * RET  : Return the value of register 0xSimSupplyManagement3
 *
 * Notes : From register 0x48B, bits 2:2
 *
 **************************************************************************/
unsigned char set_v_mod_select( enum v_mod_select param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(SIM_SUPPLY_MANAGEMENT_3_REG);

    /* 
     * This bit is active only if 'VmodSelCtrlSel'=1, 0:Vmod 
     * ouput voltage is set by VmodSel1 register 
     * 1:Vmod ouput voltage is set by VmodSel2 register 
     */ 
    switch( param ){
        case VMOD_SELECT_BY_VMODSEL2_E: 
           value = old_value | V_MOD_SELECT_MASK; 
           break;
        case VMOD_SELECT_BY_VMODSEL1_E: 
           value = old_value & ~ V_MOD_SELECT_MASK;
           break;
    }
  

    I2CWrite(SIM_SUPPLY_MANAGEMENT_3_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_v_mod_select
 *
 * RET  : Return the value of register 0xSimSupplyManagement3
 *
 * Notes : From register 0x48B, bits 2:2
 *
 **************************************************************************/
unsigned char get_v_mod_select()
  {
    unsigned char value;


    /* 
     * This bit is active only if 'VmodSelCtrlSel'=1, 0:Vmod 
     * ouput voltage is set by VmodSel1 register 
     * 1:Vmod ouput voltage is set by VmodSel2 register 
     */ 
    value = (I2CRead(SIM_SUPPLY_MANAGEMENT_3_REG) & V_MOD_SELECT_MASK) >> 2;
    return value;
  }


/***************************************************************************
 *
 * Function : set_vmod_output_voltage
 *
 * IN   : param, a value to write to the regiter VmodSel34CtrlReg
 * OUT  : 
 *
 * RET  : Return the value of register 0xVmodSel34CtrlReg
 *
 * Notes : From register 0x48C, bits 1:0
 *
 **************************************************************************/
unsigned char set_vmod_output_voltage( enum vmod_output_voltage param )
  {
    unsigned char value = 0;
    unsigned char old_value;

    old_value = I2CRead(VMOD_SEL_34_CTRL_REG_REG);

    /* 
     * Vmod output voltage 
     */ 
  

     value =  old_value & ~VMOD_OUTPUT_VOLTAGE_MASK ;

    switch(  param ){

           case VMOD_VOLTAGE_DEFINED_BY_VMODSEL1_OR_VMODSEL2_E:
                value =  value | VMOD_VOLTAGE_DEFINED_BY_VMODSEL1_OR_VMODSEL2 ;
                break;
           case VMOD_VOLTAGE_DEFINED_BY_VMODSEL3_E:
                value =  value | VMOD_VOLTAGE_DEFINED_BY_VMODSEL3 ;
                break;
           case VMOD_VOLTAGE_DEFINED_BY_VMODSEL4_E:
                value =  value | VMOD_VOLTAGE_DEFINED_BY_VMODSEL4 ;
                break;
    }
  

    I2CWrite(VMOD_SEL_34_CTRL_REG_REG, value);

    return old_value;
  }


/***************************************************************************
 *
 * Function : get_vmod_output_voltage
 *
 * RET  : Return the value of register 0xVmodSel34CtrlReg
 *
 * Notes : From register 0x48C, bits 1:0
 *
 **************************************************************************/
unsigned char get_vmod_output_voltage()
  {
    unsigned char value;


    /* 
     * Vmod output voltage 
     */ 
    value = (I2CRead(VMOD_SEL_34_CTRL_REG_REG) & VMOD_OUTPUT_VOLTAGE_MASK);
    return value;
  }




#ifdef __cplusplus
}
#endif

#endif
