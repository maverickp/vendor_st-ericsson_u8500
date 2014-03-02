/****************************************************************************
 * File : c:/Lisp/Production/ab8500/ab8500_Audio/Linux/ab8500_Audio.h
 * 
 *
 * Generated on the 26/02/2010 10:20 by the 'gen-I2C' code generator 
 *
 * Generator written in Common Lisp, created by  R�mi PRUD'HOMME - ST 
 * with the help of : Gr�gory GOSCINIACK - ST, Ir�n�e BROCHIER - Teamlog
 *
 ***************************************************************************
 *  Copyrigtht ST Microelectronics  2009
 ***************************************************************************/

// This file is generated. Don't modify it 

#ifndef C__LISP_PRODUCTION_AB8500_AB8500_AUDIO_LINUX_AB8500_AUDIO_H
#define C__LISP_PRODUCTION_AB8500_AB8500_AUDIO_LINUX_AB8500_AUDIO_H


#ifdef __cplusplus
extern "C" {
#endif
#include "ab8500_Audio_types.h"

unsigned char set_digital_power_up( enum digital_power_up param );
unsigned char get_digital_power_up();
unsigned char set_analog_power_up( enum analog_power_up param );
unsigned char get_analog_power_up();
unsigned char set_audio_software_reset( enum audio_software_reset param );
unsigned char get_audio_software_reset();
unsigned char set_ad12_digital_audio_paths_enable( enum ad12_enable param );
unsigned char get_ad12_digital_audio_paths_enable();
unsigned char set_ad34_digital_audio_paths_enable( enum ad34_enable param );
unsigned char get_ad34_digital_audio_paths_enable();
unsigned char set_ad57_digital_audio_paths_enable( enum ad57_enable param );
unsigned char get_ad57_digital_audio_paths_enable();
unsigned char set_ad68_digital_audio_paths_enable( enum ad68_enable param );
unsigned char get_ad68_digital_audio_paths_enable();
unsigned char set_da1_digital_audio_paths_enable( enum da1_enable param );
unsigned char get_da1_digital_audio_paths_enable();
unsigned char set_da2_digital_audio_paths_enable( enum da2_enable param );
unsigned char get_da2_digital_audio_paths_enable();
unsigned char set_da3_digital_audio_paths_enable( enum da3_enable param );
unsigned char get_da3_digital_audio_paths_enable();
unsigned char set_da4_digital_audio_paths_enable( enum da4_enable param );
unsigned char get_da4_digital_audio_paths_enable();
unsigned char set_da5_digital_audio_paths_enable( enum da5_enable param );
unsigned char get_da5_digital_audio_paths_enable();
unsigned char set_da6_digital_audio_paths_enable( enum da6_enable param );
unsigned char get_da6_digital_audio_paths_enable();
unsigned char set_low_power_headset( enum audio_low_power_mode param );
unsigned char get_low_power_headset();
unsigned char set_low_power_dac_headset( enum low_power_dac_headset param );
unsigned char get_low_power_dac_headset();
unsigned char set_low_power_ear( enum low_power_ear param );
unsigned char get_low_power_ear();
unsigned char set_ear_selection( enum ear_selection param );
unsigned char get_ear_selection();
unsigned char set_headset_offset_cancelation( enum headset_offset_cancelation param );
unsigned char get_headset_offset_cancelation();
unsigned char set_micro1_power( enum micro1_power param );
unsigned char get_micro1_power();
unsigned char set_micro2_power( enum micro2_power param );
unsigned char get_micro2_power();
unsigned char set_line_in_left_power( enum line_in_left_power param );
unsigned char get_line_in_left_power();
unsigned char set_line_in_right_power( enum line_in_right_power param );
unsigned char get_line_in_right_power();
unsigned char set_analog_micro1_mute( enum analog_micro1_mute param );
unsigned char get_analog_micro1_mute();
unsigned char set_analog_micro2_mute( enum analog_micro2_mute param );
unsigned char get_analog_micro2_mute();
unsigned char set_analog_line_in_left_mute( enum analog_line_in_left_mute param );
unsigned char get_analog_line_in_left_mute();
unsigned char set_analog_line_in_right_mute( enum analog_line_in_right_mute param );
unsigned char get_analog_line_in_right_mute();
unsigned char set_digital_micro1_mute( enum digital1_micro_mute param );
unsigned char get_digital_micro1_mute();
unsigned char set_digital_micro2_mute( enum digital2_micro_mute param );
unsigned char get_digital_micro2_mute();
unsigned char set_digital_micro3_mute( enum digital3_micro_mute param );
unsigned char get_digital_micro3_mute();
unsigned char set_digital_micro4_mute( enum digital4_micro_mute param );
unsigned char get_digital_micro4_mute();
unsigned char set_digital_micro5_mute( enum digital5_micro_mute param );
unsigned char get_digital_micro5_mute();
unsigned char set_digital_micro6_mute( enum digital6_micro_mute param );
unsigned char get_digital_micro6_mute();
unsigned char set_fade_speed( enum fade_speed param );
unsigned char get_fade_speed();
unsigned char set_adc1_connected_to_mic( enum adc1_connected_to_mic_a param );
unsigned char get_adc1_connected_to_mic();
unsigned char set_adc2_connected_to_mic( enum adc2_connected_to_mic param );
unsigned char get_adc2_connected_to_mic();
unsigned char set_hsl_dac_driver_power( enum hsl_dac_driver_power param );
unsigned char get_hsl_dac_driver_power();
unsigned char set_hsr_dac_driver_power( enum hsr_dac_driver_power param );
unsigned char get_hsr_dac_driver_power();
unsigned char set_adc1_power( enum adc1_power param );
unsigned char get_adc1_power();
unsigned char set_adc3_power( enum adc3_power param );
unsigned char get_adc3_power();
unsigned char set_adc2_power( enum adc2_power param );
unsigned char get_adc2_power();
unsigned char set_internal_pull_down_enabled( enum internal_pull_down_enabled param );
unsigned char get_internal_pull_down_enabled();
unsigned char set_ear_class_ab_power( enum ear_class_ab_power param );
unsigned char get_ear_class_ab_power();
unsigned char set_headset_left_power( enum headset_left_power param );
unsigned char get_headset_left_power();
unsigned char set_headset_right_power( enum headset_right_power param );
unsigned char get_headset_right_power();
unsigned char set_hf_class_d_left_power( enum hf_left_class_d_power param );
unsigned char get_hf_class_d_left_power();
unsigned char set_hf_class_d_rigth_power( enum hf_right_class_d_power param );
unsigned char get_hf_class_d_rigth_power();
unsigned char set_vibrator1_class_d_power( enum vibrator1_power param );
unsigned char get_vibrator1_class_d_power();
unsigned char set_vibrator2_class_d_power( enum vibrator2_power param );
unsigned char get_vibrator2_class_d_power();
unsigned char set_ear_and_digital_path_power( enum ear_and_digital_path_power param );
unsigned char get_ear_and_digital_path_power();
unsigned char set_headset_left_path_power( enum headset_left_path_power param );
unsigned char get_headset_left_path_power();
unsigned char set_headset_right_path_power( enum headset_right_path_power param );
unsigned char get_headset_right_path_power();
unsigned char set_hf_class_d_left_path_power( enum hf_class_d_left_path_power param );
unsigned char get_hf_class_d_left_path_power();
unsigned char set_hf_class_d_rigth_path_power( enum hf_class_d_rigth_path_power param );
unsigned char get_hf_class_d_rigth_path_power();
unsigned char set_vibrator1_class_d_path_power( enum vibrator1_class_d_path_power param );
unsigned char get_vibrator1_class_d_path_power();
unsigned char set_vibrator2_class_d_path_power( enum vibrator2_class_d_path_power param );
unsigned char get_vibrator2_class_d_path_power();
unsigned char set_ear_class_ab_mute( enum ear_class_ab_mute param );
unsigned char get_ear_class_ab_mute();
unsigned char set_headset_left_mute( enum headset_left_mute param );
unsigned char get_headset_left_mute();
unsigned char set_headset_right_mute( enum headset_right_mute param );
unsigned char get_headset_right_mute();
unsigned char set_ear_auto_switch_off_enable( enum switch_off_enable param );
unsigned char get_ear_auto_switch_off_enable();
unsigned char set_ear_detection_enable( enum ear_detection_enable param );
unsigned char get_ear_detection_enable();
unsigned char set_headset_detection_enable( enum headset_detection_enable param );
unsigned char get_headset_detection_enable();
unsigned char set_headset_pull_down_enable( enum headset_pull_down_enable param );
unsigned char get_headset_pull_down_enable();
unsigned char set_charge_pump_enable( enum charge_pump_enable param );
unsigned char get_charge_pump_enable();
unsigned char set_auto_headset_power_up_enable( enum auto_headset_power param );
unsigned char get_auto_headset_power_up_enable();
unsigned char set_high_threshold( enum threshold param );
unsigned char get_high_threshold();
unsigned char set_low_threshold( enum threshold param );
unsigned char get_low_threshold();
unsigned char set_input_voltage_control( enum input_voltage_control param );
unsigned char get_input_voltage_control();
unsigned char set_envelope_detection_c_p_enable( enum envelope_detection_c_p_enable param );
unsigned char get_envelope_detection_c_p_enable();
unsigned char set_envelope_decay_time( enum decay_time param );
unsigned char get_envelope_decay_time();
unsigned char set_vib1_controlled_internal( enum vib1 param );
unsigned char get_vib1_controlled_internal();
unsigned char set_vib2_controlled_internal( enum vib2 param );
unsigned char get_vib2_controlled_internal();
unsigned char set_pwm1_generator_control( enum pwm1_started_together param );
unsigned char get_pwm1_generator_control();
unsigned char set_pwm2_generator_control( enum pwm2_started_together param );
unsigned char get_pwm2_generator_control();
unsigned char set_pwm1_generator_neg_enable( enum pwm1_generator_negative param );
unsigned char get_pwm1_generator_neg_enable();
unsigned char set_pwm1_generator_pos_enable( enum pwm1_generator_positive param );
unsigned char get_pwm1_generator_pos_enable();
unsigned char set_pwm2_generator_neg_enable( enum pwm2_generator_negative param );
unsigned char get_pwm2_generator_neg_enable();
unsigned char set_pwm2_generator_pos_enable( enum pwm2_generator_positive param );
unsigned char get_pwm2_generator_pos_enable();
unsigned char set_vib1_positive_forced_to_voltage( enum forced_to_voltage param );
unsigned char get_vib1_positive_forced_to_voltage();
unsigned char set_vib1_positive_duty_cyle( enum duty_cycle param );
unsigned char get_vib1_positive_duty_cyle();
unsigned char set_vib1_negative_pin_forced( enum forced_to_voltage param );
unsigned char get_vib1_negative_pin_forced();
unsigned char set_vib1_negative_duty_cyle( enum duty_cycle param );
unsigned char get_vib1_negative_duty_cyle();
unsigned char set_vib2_positive_forced_to_voltage( enum forced_to_voltage param );
unsigned char get_vib2_positive_forced_to_voltage();
unsigned char set_vib2_positive_duty_cyle( enum duty_cycle param );
unsigned char get_vib2_positive_duty_cyle();
unsigned char set_vib2_negative_forced_to_voltage( enum forced_to_voltage param );
unsigned char get_vib2_negative_forced_to_voltage();
unsigned char set_vib2_negative_duty_cyle( enum duty_cycle param );
unsigned char get_vib2_negative_duty_cyle();
unsigned char set_mic1_single_ended_conf( enum single_or_differential param );
unsigned char get_mic1_single_ended_conf();
unsigned char set_low_power_micro1_enable( enum low_power_micro1_enable param );
unsigned char get_low_power_micro1_enable();
unsigned char set_mic1_gain( enum analog_gain param );
unsigned char get_mic1_gain();
unsigned char set_mic2_single_ended_conf( enum single_or_differential param );
unsigned char get_mic2_single_ended_conf();
unsigned char set_low_power_micro2_enable( enum low_power_micro2_enable param );
unsigned char get_low_power_micro2_enable();
unsigned char set_mic2_gain( enum analog_gain param );
unsigned char get_mic2_gain();
unsigned char set_left_headset_analog_gain( enum headset_analog_gain param );
unsigned char get_left_headset_analog_gain();
unsigned char set_right_headset_analog_gain( enum headset_analog_gain param );
unsigned char get_right_headset_analog_gain();
unsigned char set_left_line_analog_gain( enum line_in_gain param );
unsigned char get_left_line_analog_gain();
unsigned char set_right_line_analog_gain( enum line_in_gain param );
unsigned char get_right_line_analog_gain();
unsigned char set_left_line_in_to_headset_gain( enum line_in_to_head_set param );
unsigned char get_left_line_in_to_headset_gain();
unsigned char set_right_line_in_to_headset_gain( enum line_in_to_head_set param );
unsigned char get_right_line_in_to_headset_gain();
unsigned char set_ad1_offset_cancel_enable( enum ad1_offset_cancel param );
unsigned char get_ad1_offset_cancel_enable();
unsigned char set_ad2_offset_cancel_enable( enum ad2_offset_cancel param );
unsigned char get_ad2_offset_cancel_enable();
unsigned char set_ad3_offset_cancel_enable( enum ad3_offset_cancel param );
unsigned char get_ad3_offset_cancel_enable();
unsigned char set_ad4_offset_cancel_enable( enum ad4_offset_cancel param );
unsigned char get_ad4_offset_cancel_enable();
unsigned char set_ad1_voice_filter_enable( enum ad1_voice_filter_enable param );
unsigned char get_ad1_voice_filter_enable();
unsigned char set_ad2_voice_filter_enable( enum ad2_voice_filter_enable param );
unsigned char get_ad2_voice_filter_enable();
unsigned char set_ad3_voice_filter_enable( enum ad3_voice_filter_enable param );
unsigned char get_ad3_voice_filter_enable();
unsigned char set_ad4_voice_filter_enable( enum ad4_voice_filter_enable param );
unsigned char get_ad4_voice_filter_enable();
unsigned char set_master0_mode_enable( enum master0_mode_enable param );
unsigned char get_master0_mode_enable();
unsigned char set_bit_clock1( enum tdm_bit_clock param );
unsigned char get_bit_clock1();
unsigned char set_bit_clock1_enable( enum bit_clock1_enable param );
unsigned char get_bit_clock1_enable();
unsigned char set_bit_clock0( enum tdm_bit_clock param );
unsigned char get_bit_clock0();
unsigned char set_bit_clock0_enable( enum bit_clock0_enable param );
unsigned char get_bit_clock0_enable();
unsigned char set_first_slot0_synchro( enum first_slot_synchro0 param );
unsigned char get_first_slot0_synchro();
unsigned char set_input0_bit_sampled( enum input0_bit_sampled param );
unsigned char get_input0_bit_sampled();
unsigned char set_if0_delayed( enum delayed param );
unsigned char get_if0_delayed();
unsigned char set_if0_mode( enum format_mode param );
unsigned char get_if0_mode();
unsigned char set_if0_word_length( enum word_length param );
unsigned char get_if0_word_length();
unsigned char set_da_data0_to_ad_data1_enable( enum da_data0_to_ad_data1_enable param );
unsigned char get_da_data0_to_ad_data1_enable();
unsigned char set_if0_on_if1_enable( enum if0_on_if1_enable param );
unsigned char get_if0_on_if1_enable();
unsigned char set_master_clock_if1_enable( enum master_clock_if1_enable param );
unsigned char get_master_clock_if1_enable();
unsigned char set_da_data1_to_ad_data0_enable( enum da_data1_to_ad_data0_enable param );
unsigned char get_da_data1_to_ad_data0_enable();
unsigned char set_if1_on_if0_enable( enum if1_on_if0_enable param );
unsigned char get_if1_on_if0_enable();
unsigned char set_master_clock_if0_enable( enum master_clock_if0_enable param );
unsigned char get_master_clock_if0_enable();
unsigned char set_burst_mode_enable( enum burst_mode_enable param );
unsigned char get_burst_mode_enable();
unsigned char set_first_slot1_synchro( enum first_slot_synchro0 param );
unsigned char get_first_slot1_synchro();
unsigned char set_input1_bit_sampled( enum input1_bit_sampled param );
unsigned char get_input1_bit_sampled();
unsigned char set_if1_delayed( enum delayed param );
unsigned char get_if1_delayed();
unsigned char set_if1_mode( enum format_mode param );
unsigned char get_if1_mode();
unsigned char set_if1_word_length( enum word_length param );
unsigned char get_if1_word_length();
unsigned char set_slot_output0( enum slot_output param );
unsigned char get_slot_output0();
unsigned char set_slot_output1( enum slot_output param );
unsigned char get_slot_output1();
unsigned char set_slot_output2( enum slot_output param );
unsigned char get_slot_output2();
unsigned char set_slot_output3( enum slot_output param );
unsigned char get_slot_output3();
unsigned char set_slot_output4( enum slot_output param );
unsigned char get_slot_output4();
unsigned char set_slot_output5( enum slot_output param );
unsigned char get_slot_output5();
unsigned char set_slot_output6( enum slot_output param );
unsigned char get_slot_output6();
unsigned char set_slot_output7( enum slot_output param );
unsigned char get_slot_output7();
unsigned char set_slot_output8( enum slot_output param );
unsigned char get_slot_output8();
unsigned char set_slot_output9( enum slot_output param );
unsigned char get_slot_output9();
unsigned char set_slot_output10( enum slot_output param );
unsigned char get_slot_output10();
unsigned char set_slot_output11( enum slot_output param );
unsigned char get_slot_output11();
unsigned char set_slot_output12( enum slot_output param );
unsigned char get_slot_output12();
unsigned char set_slot_output13( enum slot_output param );
unsigned char get_slot_output13();
unsigned char set_slot_output14( enum slot_output param );
unsigned char get_slot_output14();
unsigned char set_slot_output15( enum slot_output param );
unsigned char get_slot_output15();
unsigned char set_slot_output16( enum slot_output param );
unsigned char get_slot_output16();
unsigned char set_slot_output17( enum slot_output param );
unsigned char get_slot_output17();
unsigned char set_slot_output18( enum slot_output param );
unsigned char get_slot_output18();
unsigned char set_slot_output19( enum slot_output param );
unsigned char get_slot_output19();
unsigned char set_slot_output20( enum slot_output param );
unsigned char get_slot_output20();
unsigned char set_slot_output21( enum slot_output param );
unsigned char get_slot_output21();
unsigned char set_slot_output22( enum slot_output param );
unsigned char get_slot_output22();
unsigned char set_slot_output23( enum slot_output param );
unsigned char get_slot_output23();
unsigned char set_slot_output24( enum slot_output param );
unsigned char get_slot_output24();
unsigned char set_slot_output25( enum slot_output param );
unsigned char get_slot_output25();
unsigned char set_slot_output26( enum slot_output param );
unsigned char get_slot_output26();
unsigned char set_slot_output27( enum slot_output param );
unsigned char get_slot_output27();
unsigned char set_slot_output28( enum slot_output param );
unsigned char get_slot_output28();
unsigned char set_slot_output29( enum slot_output param );
unsigned char get_slot_output29();
unsigned char set_slot_output30( enum slot_output param );
unsigned char get_slot_output30();
unsigned char set_slot_output31( enum slot_output param );
unsigned char get_slot_output31();
unsigned char set_slot_hiz0( enum slot_hiz param );
unsigned char get_slot_hiz0();
unsigned char set_slot_hiz1( enum slot_hiz param );
unsigned char get_slot_hiz1();
unsigned char set_slot_hiz2( enum slot_hiz param );
unsigned char get_slot_hiz2();
unsigned char set_slot_hiz3( enum slot_hiz param );
unsigned char get_slot_hiz3();
unsigned char set_slot_hiz4( enum slot_hiz param );
unsigned char get_slot_hiz4();
unsigned char set_slot_hiz5( enum slot_hiz param );
unsigned char get_slot_hiz5();
unsigned char set_slot_hiz6( enum slot_hiz param );
unsigned char get_slot_hiz6();
unsigned char set_slot_hiz7( enum slot_hiz param );
unsigned char get_slot_hiz7();
unsigned char set_slot_hiz8( enum slot_hiz param );
unsigned char get_slot_hiz8();
unsigned char set_slot_hiz9( enum slot_hiz param );
unsigned char get_slot_hiz9();
unsigned char set_slot_hiz10( enum slot_hiz param );
unsigned char get_slot_hiz10();
unsigned char set_slot_hiz11( enum slot_hiz param );
unsigned char get_slot_hiz11();
unsigned char set_slot_hiz12( enum slot_hiz param );
unsigned char get_slot_hiz12();
unsigned char set_slot_hiz13( enum slot_hiz param );
unsigned char get_slot_hiz13();
unsigned char set_slot_hiz14( enum slot_hiz param );
unsigned char get_slot_hiz14();
unsigned char set_slot_hiz15( enum slot_hiz param );
unsigned char get_slot_hiz15();
unsigned char set_slot_hiz16( enum slot_hiz param );
unsigned char get_slot_hiz16();
unsigned char set_slot_hiz17( enum slot_hiz param );
unsigned char get_slot_hiz17();
unsigned char set_slot_hiz18( enum slot_hiz param );
unsigned char get_slot_hiz18();
unsigned char set_slot_hiz19( enum slot_hiz param );
unsigned char get_slot_hiz19();
unsigned char set_slot_hiz20( enum slot_hiz param );
unsigned char get_slot_hiz20();
unsigned char set_slot_hiz21( enum slot_hiz param );
unsigned char get_slot_hiz21();
unsigned char set_slot_hiz22( enum slot_hiz param );
unsigned char get_slot_hiz22();
unsigned char set_slot_hiz23( enum slot_hiz param );
unsigned char get_slot_hiz23();
unsigned char set_slot_hiz24( enum slot_hiz param );
unsigned char get_slot_hiz24();
unsigned char set_slot_hiz25( enum slot_hiz param );
unsigned char get_slot_hiz25();
unsigned char set_slot_hiz26( enum slot_hiz param );
unsigned char get_slot_hiz26();
unsigned char set_slot_hiz27( enum slot_hiz param );
unsigned char get_slot_hiz27();
unsigned char set_slot_hiz28( enum slot_hiz param );
unsigned char get_slot_hiz28();
unsigned char set_slot_hiz29( enum slot_hiz param );
unsigned char get_slot_hiz29();
unsigned char set_slot_hiz30( enum slot_hiz param );
unsigned char get_slot_hiz30();
unsigned char set_slot_hiz31( enum slot_hiz param );
unsigned char get_slot_hiz31();
unsigned char set_da12_voice_filter_enable( enum da12_voice_filter_enable param );
unsigned char get_da12_voice_filter_enable();
unsigned char set_swap12_34( enum swap12_34 param );
unsigned char get_swap12_34();
unsigned char set_da_in7_to_adout1( enum da_in_to_ad_out param );
unsigned char get_da_in7_to_adout1();
unsigned char set_slot_dsp01( enum slot_dsp param );
unsigned char get_slot_dsp01();
unsigned char set_da_in8_to_adout2( enum da_in_to_ad_out param );
unsigned char get_da_in8_to_adout2();
unsigned char set_slot_dsp02( enum slot_dsp param );
unsigned char get_slot_dsp02();
unsigned char set_da34_voice_filter_enable( enum da34_voice_filter_enable param );
unsigned char get_da34_voice_filter_enable();
unsigned char set_da_in7_to_adout3( enum da_in_to_ad_out param );
unsigned char get_da_in7_to_adout3();
unsigned char set_slot_dsp03( enum slot_dsp param );
unsigned char get_slot_dsp03();
unsigned char set_da_in8_to_adout4( enum da_in_to_ad_out param );
unsigned char get_da_in8_to_adout4();
unsigned char set_slot_dsp04( enum slot_dsp param );
unsigned char get_slot_dsp04();
unsigned char set_da56_voice_filter_enable( enum da56_voice_filter_enable param );
unsigned char get_da56_voice_filter_enable();
unsigned char set_da_in7_to_adout5( enum da_in_to_ad_out param );
unsigned char get_da_in7_to_adout5();
unsigned char set_slot_dsp05( enum slot_dsp param );
unsigned char get_slot_dsp05();
unsigned char set_da_in8_to_adout6( enum da_in_to_ad_out param );
unsigned char get_da_in8_to_adout6();
unsigned char set_slot_dsp06( enum slot_dsp param );
unsigned char get_slot_dsp06();
unsigned char set_da_in8_to_adout7( enum da_in_to_ad_out param );
unsigned char get_da_in8_to_adout7();
unsigned char set_slot_dsp07( enum slot_dsp param );
unsigned char get_slot_dsp07();
unsigned char set_da_in8_to_adout8( enum da_in_to_ad_out param );
unsigned char get_da_in8_to_adout8();
unsigned char set_slot_dsp08( enum slot_dsp param );
unsigned char get_slot_dsp08();
unsigned char set_hf_output_bridged_enable( enum hf_output_bridged_enable param );
unsigned char get_hf_output_bridged_enable();
unsigned char set_vrib_output_bridged_enable( enum vrib_output_bridged_enable param );
unsigned char get_vrib_output_bridged_enable();
unsigned char set_low_emi_mode_vib1_enable( enum low_emi_mode_vib1_enable param );
unsigned char get_low_emi_mode_vib1_enable();
unsigned char set_low_emi_mode_vib2_enable( enum low_emi_mode_vib2_enable param );
unsigned char get_low_emi_mode_vib2_enable();
unsigned char set_low_emi_mode_hf_left_enable( enum low_emi_mode_hf_left_enable param );
unsigned char get_low_emi_mode_hf_left_enable();
unsigned char set_low_emi_mode_hf_right_enable( enum low_emi_mode_hf_right_enable param );
unsigned char get_low_emi_mode_hf_right_enable();
unsigned char set_class_d_fir_bypass( enum class__d__fir_bypass param );
unsigned char get_class_d_fir_bypass();
unsigned char set_high_volume( enum high_volume param );
unsigned char get_high_volume();
unsigned char set_high_pass_component_dither( unsigned char param );
unsigned char get_high_pass_component_dither();
unsigned char set_highwhite_component_dither( unsigned char param );
unsigned char get_highwhite_component_dither();
unsigned char set_anc_input( enum anc_input param );
unsigned char get_anc_input();
unsigned char get_decimator_mic1();
unsigned char get_decimator_mic2();
unsigned char get_decimator_mic3();
unsigned char get_decimator_mic4();
unsigned char get_decimator_mic5();
unsigned char get_decimator_mic6();
unsigned char set_output_digital_in1( enum path_in1 param );
unsigned char get_output_digital_in1();
unsigned char set_output_digital_in2( enum path_in2 param );
unsigned char get_output_digital_in2();
unsigned char set_dig_micro1_for_out1( enum micro param );
unsigned char get_dig_micro1_for_out1();
unsigned char set_dig_micro2_for_out2( enum micro param );
unsigned char get_dig_micro2_for_out2();
unsigned char set_dig_micro3_for_out3( enum micro param );
unsigned char get_dig_micro3_for_out3();
unsigned char set_dig_micro5_for_out5( enum micro param );
unsigned char get_dig_micro5_for_out5();
unsigned char set_dig_micro6_for_out6( enum micro param );
unsigned char get_dig_micro6_for_out6();
unsigned char set_anc_loop_mixed( enum anc_loop_mixed param );
unsigned char get_anc_loop_mixed();
unsigned char set_da4_or_anc_loop_path( enum da4_or_anc_mixing_enable param );
unsigned char get_da4_or_anc_loop_path();
unsigned char set_da3_or_anc_loop_path( enum da3_or_anc_mixing_enable param );
unsigned char get_da3_or_anc_loop_path();
unsigned char set_da4_mixing_enable( enum da4_mixing_enable param );
unsigned char get_da4_mixing_enable();
unsigned char set_da3_mixing_enable( enum da3_mixing_enable param );
unsigned char get_da3_mixing_enable();
unsigned char set_fir1_selection( enum selection_fir1 param );
unsigned char get_fir1_selection();
unsigned char set_fir2_selection( enum selection_fir2 param );
unsigned char get_fir2_selection();
unsigned char set_ad1_anti_click( enum fading param );
unsigned char get_ad1_anti_click();
unsigned char set_ad1_gain( enum digital_gain param );
unsigned char get_ad1_gain();
unsigned char set_ad2_anti_click( enum fading param );
unsigned char get_ad2_anti_click();
unsigned char set_ad2_gain( enum digital_gain param );
unsigned char get_ad2_gain();
unsigned char set_ad3_anti_click( enum fading param );
unsigned char get_ad3_anti_click();
unsigned char set_ad3_gain( enum digital_gain param );
unsigned char get_ad3_gain();
unsigned char set_ad4_anti_click( enum fading param );
unsigned char get_ad4_anti_click();
unsigned char set_ad4_gain( enum digital_gain param );
unsigned char get_ad4_gain();
unsigned char set_ad5_anti_click( enum fading param );
unsigned char get_ad5_anti_click();
unsigned char set_ad5_gain( enum digital_gain param );
unsigned char get_ad5_gain();
unsigned char set_ad6_anti_click( enum fading param );
unsigned char get_ad6_anti_click();
unsigned char set_ad6_gain( enum digital_gain param );
unsigned char get_ad6_gain();
unsigned char set_da1_anti_click( enum fading param );
unsigned char get_da1_anti_click();
unsigned char set_da1_gain( enum da_digital_gain param );
unsigned char get_da1_gain();
unsigned char set_da2_anti_click( enum fading param );
unsigned char get_da2_anti_click();
unsigned char set_da2_gain( enum da_digital_gain param );
unsigned char get_da2_gain();
unsigned char set_da3_anti_click( enum fading param );
unsigned char get_da3_anti_click();
unsigned char set_da3_gain( enum da_digital_gain param );
unsigned char get_da3_gain();
unsigned char set_da4_anti_click( enum fading param );
unsigned char get_da4_anti_click();
unsigned char set_da4_gain( enum da_digital_gain param );
unsigned char get_da4_gain();
unsigned char set_da5_anti_click( enum fading param );
unsigned char get_da5_anti_click();
unsigned char set_da5_gain( enum da_digital_gain param );
unsigned char get_da5_gain();
unsigned char set_da6_anti_click( enum fading param );
unsigned char get_da6_anti_click();
unsigned char set_da6_gain( enum da_digital_gain param );
unsigned char get_da6_gain();
unsigned char set_ad1_hfl_anti_click( enum fading param );
unsigned char get_ad1_hfl_anti_click();
unsigned char set_ad1_hfl_gain( enum da_digital_gain param );
unsigned char get_ad1_hfl_gain();
unsigned char set_ad2_hfr_r_anti_click( enum fading param );
unsigned char get_ad2_hfr_r_anti_click();
unsigned char set_ad2_hfr_gain( enum da_digital_gain param );
unsigned char get_ad2_hfr_gain();
unsigned char set_sinc1_interpolator( enum sinc1_interpolator_enable param );
unsigned char get_sinc1_interpolator();
unsigned char set_fading_headset_left( enum fading param );
unsigned char get_fading_headset_left();
unsigned char set_left_headset_gain( enum headset_gain param );
unsigned char get_left_headset_gain();
unsigned char set_headset_fade_speed( enum headset_fade_speed param );
unsigned char get_headset_fade_speed();
unsigned char set_fading_headset_right( enum fading param );
unsigned char get_fading_headset_right();
unsigned char set_right_headset_gain( enum headset_gain param );
unsigned char get_right_headset_gain();
unsigned char set_digital_gain_side_tone1( enum digital_gain_side_tone param );
unsigned char get_digital_gain_side_tone1();
unsigned char set_digital_gain_side_tone2( enum digital_gain_side_tone param );
unsigned char get_digital_gain_side_tone2();
unsigned char set_anc_operation_enable( enum anc_operation_enable param );
unsigned char get_anc_operation_enable();
unsigned char set_iir_status( enum iir_status param );
unsigned char get_iir_status();
unsigned char set_fir_coefficient_pointer( enum fir_coefficient_pointer param );
unsigned char get_fir_coefficient_pointer();
unsigned char set_warped_shift_in( enum dig_anc_step_gain param );
unsigned char get_warped_shift_in();
unsigned char set_fir_shift_out( enum dig_anc_step_gain param );
unsigned char get_fir_shift_out();
unsigned char set_iir_shift_out( enum dig_anc_step_gain param );
unsigned char get_iir_shift_out();
unsigned char set_anc_fir_coeff_msb( unsigned char param );
unsigned char get_anc_fir_coeff_msb();
unsigned char set_anc_fir_coeff_lsb( unsigned char param );
unsigned char get_anc_fir_coeff_lsb();
unsigned char set_anc_iir_coeff_msb( unsigned char param );
unsigned char get_anc_iir_coeff_msb();
unsigned char set_anc_iir_coeff_lsb( unsigned char param );
unsigned char get_anc_iir_coeff_lsb();
unsigned char set_anc_warp_delay_msb( unsigned char param );
unsigned char get_anc_warp_delay_msb();
unsigned char set_anc_warp_delay_lsb( unsigned char param );
unsigned char get_anc_warp_delay_lsb();
unsigned char get_anc_fir_peak_msb();
unsigned char get_anc_fir_peak_lsb();
unsigned char get_anc_iir_peak_msb();
unsigned char get_anc_iir_peak_lsb();
void set_anc_fir_coeff(unsigned short value);
unsigned short get_anc_fir_coeff( );
void set_anc_iir_coeff(unsigned short value);
unsigned short get_anc_iir_coeff( );
void set_anc_warp_delay(unsigned short value);
unsigned short get_anc_warp_delay( );
unsigned short get_anc_iir_peak( );
unsigned short get_anc_fir_peak( );
unsigned char get_side_tone_control();
unsigned char get_address_coefficient();
unsigned char set_side_tone_coff_msb( unsigned char param );
unsigned char get_side_tone_coff_msb();
unsigned char set_side_tone_coff_lsb( unsigned char param );
unsigned char get_side_tone_coff_lsb();
unsigned char set_fir_filters_enable( enum fir_filters_enable param );
unsigned char get_fir_filters_enable();
unsigned char set_fir_data_rate( enum fir_data_rate param );
unsigned char get_fir_data_rate();
unsigned char set_fir_busy( enum fir_busy param );
unsigned char get_fir_busy();
unsigned char set_interrupt_hs_offset_status_enable( unsigned char param );
unsigned char get_interrupt_hs_offset_status_enable();
unsigned char set_interrupt_buffer_full_enable( unsigned char param );
unsigned char get_interrupt_buffer_full_enable();
unsigned char set_interrupt_buffer_empty_enable( unsigned char param );
unsigned char get_interrupt_buffer_empty_enable();
unsigned char set_interrupt_da_chan_enable( unsigned char param );
unsigned char get_interrupt_da_chan_enable();
unsigned char set_interrupt_gain_enable( unsigned char param );
unsigned char get_interrupt_gain_enable();
unsigned char set_interrupt_dsp_af_enable( unsigned char param );
unsigned char get_interrupt_dsp_af_enable();
unsigned char set_interrupt_dsp_dz_enable( unsigned char param );
unsigned char get_interrupt_dsp_dz_enable();
unsigned char set_interrupt_fir_enable( enum fir_enable param );
unsigned char get_interrupt_fir_enable();
unsigned char get_interrupt_status0();
unsigned char set_interrupt_hs_offset_status( unsigned char param );
unsigned char get_interrupt_hs_offset_status();
unsigned char get_status_buffer_full();
unsigned char get_status_buffer_empty();
unsigned char get_status_da_chan();
unsigned char get_status_gain();
unsigned char get_status_dsp_ad();
unsigned char get_status_dsp_da();
unsigned char get_status_fir();
unsigned char set_interrupt_vss_ready( enum interrupt_vss_ready_enable param );
unsigned char get_interrupt_vss_ready();
unsigned char set_interrupt_short_circuit_detected_hsl( enum interrupt_short_circuit_hsl_enable param );
unsigned char get_interrupt_short_circuit_detected_hsl();
unsigned char set_interrupt_short_circuit_detected_hsr( enum interrupt_short_circuit_hsr_enable param );
unsigned char get_interrupt_short_circuit_detected_hsr();
unsigned char set_interrupt_short_circuit_detected_ear( enum interrupt_short_circuit_detected_ear_enable param );
unsigned char get_interrupt_short_circuit_detected_ear();
unsigned char get_status_vss_ready();
unsigned char get_status_short_circuit_detected_hsl();
unsigned char get_status_short_circuit_detected_hsr();
unsigned char get_status_short_circuit_detected_ear();
unsigned char set_fifo_mask_enable( enum fifo_mask_enable param );
unsigned char get_fifo_mask_enable();
unsigned char set_wakeup_signal_level( enum wakeup_signal_level param );
unsigned char get_wakeup_signal_level();
unsigned char set_fifo_burst_length( enum fifo_burst_length param );
unsigned char get_fifo_burst_length();
unsigned char set_fifo_extra_clock( enum extra_clock param );
unsigned char get_fifo_extra_clock();
unsigned char set_number_extra_clocks( unsigned char param );
unsigned char get_number_extra_clocks();
unsigned char set_master_fifo_mode_enable( enum master_fifo_mode_enable param );
unsigned char get_master_fifo_mode_enable();
unsigned char set_bust_mode_run( enum bust_mode_run param );
unsigned char get_bust_mode_run();
unsigned char set_fifo_switch_frame( unsigned char param );
unsigned char get_fifo_switch_frame();
unsigned char set_fifo_wake_up_delay( unsigned char param );
unsigned char get_fifo_wake_up_delay();
unsigned char set_fifo_samples_number( unsigned char param );
unsigned char get_fifo_samples_number();
unsigned char get_stw4500_revision();


#ifdef __cplusplus
}
#endif

#endif
