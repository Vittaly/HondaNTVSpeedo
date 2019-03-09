/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.76
        Device            :  PIC16F15325
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.00
        MPLAB 	          :  MPLAB X 5.10	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set SpeedSens aliases
#define SpeedSens_TRIS                 TRISAbits.TRISA0
#define SpeedSens_LAT                  LATAbits.LATA0
#define SpeedSens_PORT                 PORTAbits.RA0
#define SpeedSens_WPU                  WPUAbits.WPUA0
#define SpeedSens_OD                   ODCONAbits.ODCA0
#define SpeedSens_ANS                  ANSELAbits.ANSA0
#define SpeedSens_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define SpeedSens_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define SpeedSens_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define SpeedSens_GetValue()           PORTAbits.RA0
#define SpeedSens_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define SpeedSens_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define SpeedSens_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define SpeedSens_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define SpeedSens_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define SpeedSens_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define SpeedSens_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define SpeedSens_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set TahoSens aliases
#define TahoSens_TRIS                 TRISAbits.TRISA1
#define TahoSens_LAT                  LATAbits.LATA1
#define TahoSens_PORT                 PORTAbits.RA1
#define TahoSens_WPU                  WPUAbits.WPUA1
#define TahoSens_OD                   ODCONAbits.ODCA1
#define TahoSens_ANS                  ANSELAbits.ANSA1
#define TahoSens_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define TahoSens_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define TahoSens_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define TahoSens_GetValue()           PORTAbits.RA1
#define TahoSens_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define TahoSens_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define TahoSens_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define TahoSens_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define TahoSens_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define TahoSens_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define TahoSens_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define TahoSens_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set SpeedXRev aliases
#define SpeedXRev_TRIS                 TRISAbits.TRISA2
#define SpeedXRev_LAT                  LATAbits.LATA2
#define SpeedXRev_PORT                 PORTAbits.RA2
#define SpeedXRev_WPU                  WPUAbits.WPUA2
#define SpeedXRev_OD                   ODCONAbits.ODCA2
#define SpeedXRev_ANS                  ANSELAbits.ANSA2
#define SpeedXRev_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define SpeedXRev_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define SpeedXRev_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define SpeedXRev_GetValue()           PORTAbits.RA2
#define SpeedXRev_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define SpeedXRev_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define SpeedXRev_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define SpeedXRev_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define SpeedXRev_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define SpeedXRev_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define SpeedXRev_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define SpeedXRev_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set SpeedYRev aliases
#define SpeedYRev_PORT                 PORTAbits.RA3
#define SpeedYRev_WPU                  WPUAbits.WPUA3
#define SpeedYRev_GetValue()           PORTAbits.RA3
#define SpeedYRev_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define SpeedYRev_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)

// get/set TahoXRev aliases
#define TahoXRev_TRIS                 TRISAbits.TRISA4
#define TahoXRev_LAT                  LATAbits.LATA4
#define TahoXRev_PORT                 PORTAbits.RA4
#define TahoXRev_WPU                  WPUAbits.WPUA4
#define TahoXRev_OD                   ODCONAbits.ODCA4
#define TahoXRev_ANS                  ANSELAbits.ANSA4
#define TahoXRev_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define TahoXRev_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define TahoXRev_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define TahoXRev_GetValue()           PORTAbits.RA4
#define TahoXRev_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define TahoXRev_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define TahoXRev_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define TahoXRev_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define TahoXRev_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define TahoXRev_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define TahoXRev_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define TahoXRev_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set TahoYRev aliases
#define TahoYRev_TRIS                 TRISAbits.TRISA5
#define TahoYRev_LAT                  LATAbits.LATA5
#define TahoYRev_PORT                 PORTAbits.RA5
#define TahoYRev_WPU                  WPUAbits.WPUA5
#define TahoYRev_OD                   ODCONAbits.ODCA5
#define TahoYRev_ANS                  ANSELAbits.ANSA5
#define TahoYRev_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define TahoYRev_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define TahoYRev_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define TahoYRev_GetValue()           PORTAbits.RA5
#define TahoYRev_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define TahoYRev_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define TahoYRev_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define TahoYRev_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define TahoYRev_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define TahoYRev_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define TahoYRev_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define TahoYRev_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set SCL1 aliases
#define SCL1_TRIS                 TRISCbits.TRISC0
#define SCL1_LAT                  LATCbits.LATC0
#define SCL1_PORT                 PORTCbits.RC0
#define SCL1_WPU                  WPUCbits.WPUC0
#define SCL1_OD                   ODCONCbits.ODCC0
#define SCL1_ANS                  ANSELCbits.ANSC0
#define SCL1_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define SCL1_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define SCL1_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define SCL1_GetValue()           PORTCbits.RC0
#define SCL1_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define SCL1_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define SCL1_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define SCL1_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define SCL1_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define SCL1_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define SCL1_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define SCL1_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set SDA1 aliases
#define SDA1_TRIS                 TRISCbits.TRISC1
#define SDA1_LAT                  LATCbits.LATC1
#define SDA1_PORT                 PORTCbits.RC1
#define SDA1_WPU                  WPUCbits.WPUC1
#define SDA1_OD                   ODCONCbits.ODCC1
#define SDA1_ANS                  ANSELCbits.ANSC1
#define SDA1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define SDA1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define SDA1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define SDA1_GetValue()           PORTCbits.RC1
#define SDA1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define SDA1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define SDA1_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define SDA1_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define SDA1_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define SDA1_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define SDA1_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define SDA1_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set RC2 procedures
#define RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RC2_GetValue()              PORTCbits.RC2
#define RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define RC2_SetPullup()             do { WPUCbits.WPUC2 = 1; } while(0)
#define RC2_ResetPullup()           do { WPUCbits.WPUC2 = 0; } while(0)
#define RC2_SetAnalogMode()         do { ANSELCbits.ANSC2 = 1; } while(0)
#define RC2_SetDigitalMode()        do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()              PORTCbits.RC3
#define RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define RC3_SetPullup()             do { WPUCbits.WPUC3 = 1; } while(0)
#define RC3_ResetPullup()           do { WPUCbits.WPUC3 = 0; } while(0)
#define RC3_SetAnalogMode()         do { ANSELCbits.ANSC3 = 1; } while(0)
#define RC3_SetDigitalMode()        do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()             do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()           do { WPUCbits.WPUC4 = 0; } while(0)
#define RC4_SetAnalogMode()         do { ANSELCbits.ANSC4 = 1; } while(0)
#define RC4_SetDigitalMode()        do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()              PORTCbits.RC5
#define RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RC5_SetPullup()             do { WPUCbits.WPUC5 = 1; } while(0)
#define RC5_ResetPullup()           do { WPUCbits.WPUC5 = 0; } while(0)
#define RC5_SetAnalogMode()         do { ANSELCbits.ANSC5 = 1; } while(0)
#define RC5_SetDigitalMode()        do { ANSELCbits.ANSC5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/