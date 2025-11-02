// SPI setting choices are actually a function of the processor.
// Many have hardware dedicated for this, so these are the pins
// we should be using. 
//
// Hence, this file.

#ifndef LC_SPI_H
#define LC_SPI_H

#include <SPI.h>

// The four shared SPI pins..
// These pins are best choice for Arduino & Teensy 3.2.
#define LC_CLK		13		// Clock				- WHITE WIRE
#define LC_MISO	12		// Input data		- GREEN WIRE
#define LC_MOSI	11		// Output data		- BLUE WIRE
#define LC_DC		9		// Data/command	- YELLOW WIRE


// The four shared SPI pins..
// These pins are best choice for Arduino MEGA
//#define LC_CLK	52		// Clock				- WHITE WIRE
//#define LC_MISO	50		// Input data		- GREEN WIRE
//#define LC_MOSI	51		// Output data		- BLUE WIRE
//#define LC_DC	53		// Data/command	- YELLOW WIRE

// The four shared SPI pins..
// These pins seem best for ESP32
//#define LC_CLK	18		// Clock				- WHITE WIRE
//#define LC_MISO	19		// Input data		- GREEN WIRE
//#define LC_MOSI	23		// Output data		- BLUE WIRE
//#define LC_DC	2		// Data/command	- YELLOW WIRE

// The four shared SPI pins..
// This set is for Adafruit Feather MO #2995
//#define LC_CLK 	24
//#define LC_MOSI	23
//#define LC_MISO	22
//#define LC_DC	21   // Free to choose.

// The four shared SPI pins..
// These pins seem best for Rpi Pico on Wokwi
//#define LC_CLK	18		// Clock				- WHITE WIRE
//#define LC_MISO	16		// Input data		- GREEN WIRE
//#define LC_MOSI	19		// Output data		- BLUE WIRE
//#define LC_DC	17		// Data/command	- YELLOW WIRE


// 5V  - RED WIRE
// GND - BLACK WIRE

// These two are non-shared pins.
// More of a serving suggestion than anything else.
// CS  - RED WIRE
// RST - BLACK WIRE


// Each device needs its own chip select pin defined.
// Some devices want reset pins defined as well.


#endif