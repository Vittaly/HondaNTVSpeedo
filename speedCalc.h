/* 
 * File:   speedCalc.h
 * Author: Nataly
 *
 * Created on March 9, 2019, 5:10 PM
 */

#ifndef SPEEDCALC_H
#define	SPEEDCALC_H

#include "trigFunc.h"

#ifdef	__cplusplus
extern "C" {
#endif


const int16_t SPEED_START_ARROW_POS = 180 << 2; // degree * 4
const uint8_t DegreePerKm7 = 120; // degree per km * 128
const uint16_t MAX_SPEED  = 220 << 2; // max speed

int getSpeedArrowDegree4(uint32_t p_speed4)  
    { 
     uint32_t r1 = p_speed4 * DegreePerKm7;
     uint16_t r2 = r1 >> 7;
     return (r2 > SPEED_START_ARROW_POS) ? (360 << 2) + SPEED_START_ARROW_POS - r2 : SPEED_START_ARROW_POS - r2;
    }



#ifdef	__cplusplus
}
#endif

#endif	/* SPEEDCALC_H */

