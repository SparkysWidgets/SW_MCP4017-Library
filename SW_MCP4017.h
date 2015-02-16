/////////////////////////////////////////////////////////////////////////////
/*!

  MCP4017.h
  I2C Driver for Microchip's MCP4017 by Ryan Edwards, Sparkys Widgets
  
  Use this library with MCP4017 or other similar I2C Digital Potentiometers!
  (A good pair can be the Microchip MCP4017 and the Analog Devices AD5246, as they dont share address.) 

  I invest a lot of time and resources providing open source hardware, software, and tutorials 
  Please help support my efforts by purchasing products from www.sparkyswidgets.com, donating some time 
  on documentation or you can even donate some BitCoin to 1NwPNsf6t5vpph6AYY5bg361PSppPSSgDn

*/
/////////////////////////////////////////////////////////////////////////////

#ifndef _SW_MCP4017_H
#define _SW_MCP4017_H


#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
	
#include <Wire.h>

#define WIPEROHMS 20 //the aproximate amount of extra resistance/error added by the wiper
#define MCP4017ADDRESS 0x2F //Microchip MCP4017 I2C 5K, 10K, 50K and 100K digital potentiometers, default address (only address really)
#define AD5246ADDRESS  0x2E //Analog Devices AD5246 I2C 5K, 10K, 50K and 100K DPs, default address(only really, good complimant to above) 

class MCP4017 {
 public:
	MCP4017(uint8_t adcAddress, uint8_t maxSteps, float maxOhms); //Overload for only this class initialization

	void setSteps(uint8_t steps);
	void setResistance(double Rout);
	float calcResistance();
 
 private:
 	uint8_t I2CADCAddress;
	void I2CSendSteps(uint8_t steps);
 	int _maxSteps; //this is the Vin of the MCP3221 in Millivolts
 	int _currentStep;
 	float _maxOhm;
	float _currentRout;
};

#endif