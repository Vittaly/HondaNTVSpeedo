/* 
 * File:   arrowUtility.h
 * Author: Nataly
 *
 * Created on March 9, 2019, 5:28 PM
 */

#ifndef ARROWUTILITY_H
#define	ARROWUTILITY_H
#include "speedCalc.h"
#include "tahoCalc.h"

#define setSpeedXDuty PWM3_LoadDutyValue
#define setSpeedYDuty PWM4_LoadDutyValue
#define setTahoXDuty  PWM5_LoadDutyValue
#define setTahoYDuty  PWM6_LoadDutyValue



#ifdef	__cplusplus
extern "C" {
#endif
    
    void SetSpeedArrowPosition(uint16_t p_speed4){
        uint16_t arrow_degree = getSpeedArrowDegree4(p_speed4);
        int16_t trig_val = cos15(arrow_degree);
        SpeedXRev_LAT = trig_val & 0x4000; // set sign bit as reverse value
        setSpeedXDuty (abs(trig_val)>>7);
        
        int16_t trig_val = sin15(arrow_degree);
        SpeedYRev_LAT = trig_val & 0x4000; // set sign bit as reverse value
        setSpeedYDuty (abs(trig_val)>>7);       
    }

    void startingTest () 
    {
        const uint8_t STEEP_COUNT = 255;
        const uint8_t SPEED_IN_STEEP4 = MAX_SPEED /(STEEP_COUNT >> 2);
        const uint8_t TURNS_IN_STEEP = MAX_TURNS/STEEP_COUNT;
        uint16_t test_speed = 0;
        while (test_speed <= MAX_SPEED){
            
            SetSpeedArrowPosition(test_speed);
            test_speed += SPEED_IN_STEEP4;
            __delay_ms(5);
        }
        
        while (test_speed >= 0){
            
            SetSpeedArrowPosition(test_speed);
            test_speed -= SPEED_IN_STEEP4;
            __delay_ms(5);
        }
        
    }


#ifdef	__cplusplus
}
#endif

#endif	/* ARROWUTILITY_H */

