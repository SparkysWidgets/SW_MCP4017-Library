/////////////////////////////////////////////////////////////////////////////
/*!

MCP4017 Basic usage example file
I2C Driver for Microchip's MCP4017 or Analog Devices' AD5246 by Ryan Edwards, Sparkys Widgets

Usage is very straight forward send the Digital Potentiometers settings at initialization
and then send either the steps or desired resistances via the methods provided!

I invest a lot of time and resources providing open source hardware, software, and tutorials
Please help support my efforts by purchasing products from www.sparkyswidgets.com, donating some time
on documentation or you can even donate some BitCoin to 1NwPNsf6t5vpph6AYY5bg361PSppPSSgDn

*/
/////////////////////////////////////////////////////////////////////////////


#include <Wire.h>
#include <SW_MCP4017.h>


uint8_t dpMaxSteps = 128; //remember even thought the the digital pot has 128 steps it looses one on either end (usually cant go all the way to last tick)
int maxRangeOhms = 5000; //this is a 5K potentiometer
MCP4017 i2cDP(MCP4017ADDRESS, dpMaxSteps, maxRangeOhms);

void setup()
{
	//The library assume you will initialize the wire library mine as well do this here
	Wire.begin();
	//initialize and run anything that needs to be performed prior to the main loop executing for the first time
	Serial.begin(9600);
	Serial.println("MCP4017 Driver Library Usage Example");
}

void loop()
{
	
	Serial.println("Setting to a midrange resistance");
	i2cDP.setSteps(64);

	delay(2500); //just a whatever delay to pause the loop

	Serial.println("Setting to full resistance");
	i2cDP.setSteps(128); //just a whatever delay to pause the loop

	Serial.println("Setting Resistance to 1800Ohms");
	i2cDP.setResistance(1800); //example showing how to pass a desired resistance in

	delay(2500);
}



