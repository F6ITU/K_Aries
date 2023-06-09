/////////////////////////////////////////////////////////////////////////
//
// Aries ATU controller sketch by Laurence Barker G8NJJ
// this sketch controls an L-match ATU network
// with a CAT interface to connect to an HPSDR control program
// copyright (c) Laurence Barker G8NJJ 2019
//
// the code is written for an Arduino Nano 33 IoT module
//
// globalinclude.h: global include definitions
/////////////////////////////////////////////////////////////////////////
#ifndef __globalinclude_h
#define __globalinclude_h


//
// hardware and software version: send back to console on request
//
#define SWVERSION 11
#define HWVERSION 5
#define PRODUCTID 2                 // Aries




//
// define this variable if if the VSWR bridge uses the binocular core ferrite
// typically this is defined with binocular core VSWR bridges on h/w rev 3 and below
// rev 5 h/w does NOT need this defined
//#define VSWR_SWAPVFVR 1



//
// define this variable if algorithm debug messages are to be printed
//
//#define CONDITIONAL_ALG_DEBUG 1


//
// define this variable if a simulated VSWR value is to be generated for algorithm testing
//
//#define CONDITIONAL_ALG_SIMVSWR 1



//
// define this variable to stream ADC sample readings to the serial port
//
//#define CONDITIONAL_STREAM_ADCREADINGS 1

//
// define for the display scale to use
// 0: 100W max;
// 1: 200W max;
// 2: 500W max;
// 3: 1000W max;
// 4: 2000W max;
//
#define VDISPLAYSCALE 4                 // number - 1 of display scales available 
#define VNUMPAGES 4                     // number of usable display pages (not counting setup or splash)



#endif      // file sentry
