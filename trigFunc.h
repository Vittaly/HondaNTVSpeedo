/* 
 * File:   trigFunc.h
 * Author: Nataly
 *
 * Created on March 9, 2019, 4:43 PM
 */

#ifndef TRIGFUNC_H
#define	TRIGFUNC_H

#include "cosTable.h"

#ifdef	__cplusplus
extern "C" {
#endif

int16_t cos15(int16_t pDegree4) //
/**
  @Summary
 return cos value * 32768 by degree * 4

  @Description

  @Preconditions
2
  @Param   
 p_degree - degree value * 2*/
{
    uint8_t degree_minor = pDegree4 & 3;
    uint16_t dg = pDegree4 >> 2;
  //  *pRevers = (pDegree4 > 360 && pDegree4 < 1080 * 4) ? true : false; // if 270 < degree > 90
    if (dg > 180) dg -= 180;  // move from third or fourth sector to first or second
    if (dg > 90) dg = 180 - dg; // move from second to first sector
    
        uint16_t steep = 0;
        if (degree_minor > 0)
        steep  = dg > 0 ? cosTab[dg - 1] - cosTab[dg] : cosTab[0] - cosTab[1];
        int16_t val = ((cosTab[dg] & 0xFFFC) >> 2) - ((steep & 0xFFF8) >> 4)* degree_minor;
        return (pDegree4 > 360 && pDegree4 < 1080) ? -val : val; // if 270 < degree > 90 then invert value
}

 int16_t sin15(int16_t pDegree4) //
/**
  @Summary
 return sin value * 65536 by degree * 4

  @Description

  @Preconditions

  @Param
 p_degree - degree value * 4*/
{
     int16_t v_degree4cos = pDegree4  -  360; // move degree to back on 90 (90 << 2)
     if (v_degree4cos < 0) v_degree4cos += 1440; // if result of the moving is negative then move up on one turn
     return cos15(v_degree4cos);
 }

#ifdef	__cplusplus
}
#endif

#endif	/* TRIGFUNC_H */

