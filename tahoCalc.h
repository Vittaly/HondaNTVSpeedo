/* 
 * File:   TahoCalc.h
 * Author: Nataly
 *
 * Created on March 9, 2019, 5:29 PM
 */

#ifndef TAHOCALC_H
#define	TAHOCALC_H

#ifdef	__cplusplus
extern "C" {
#endif

const int16_t TAHO_START_ARROW_POS = 180 << 2; // degree * 4
const uint8_t DegreePer100Turn7 = 120; // degree per 100 turns * 128
const uint16_t MAX_TURNS  = 9000; // max turns

int getTahoArrowDegree4(uint32_t p_turns)  
    { 
     uint32_t r1 = p_turns * DegreePer100Turn7;
     uint16_t r2 = r1 >> 7;
     return (r2 > TAHO_START_ARROW_POS) ? (360 << 2) + TAHO_START_ARROW_POS - r2 : TAHO_START_ARROW_POS - r2;
    }



#ifdef	__cplusplus
}
#endif

#endif	/* TAHOCALC_H */

