Welcome To: MCP4017 Driver Library
================================


##### Note: This can be used with any AVR/Arduino that needs to interface with hardware that is based on an MCP4017 Digital Pot/Rheostat (or most I2C DPs, IE AD5246 DP)

Driver to make usage of digital potentiometers like the MCP4017 easier, the creation of this class allow these methods to be passed on to child classes.
(These types of digital potentiometers are very useful in analog front end gain and offset adjustment)

Class Info
-------------------------

- Simple implementation with instancing (MCP4017 mcp4017(address, maxNumberofSteps, rangeinohms) for example)
- Feed it address, the numbers of steps in the digital potentiometer and the range of the DP in ohms
- The Addresses for the MCP4017 and AD5246 have been added to the header file for quick usage, other address can be used


Method Info
-------------------------

- setSteps, sets the resistance based on an input number of steps to tune the wiper to
- setResistance, sets the number of steps to send based on a desired resistance input
- calcResistance calculates the resistance from the current wiper setting


License Info
-------------------------

<a rel="license" href="http://creativecommons.org/licenses/by-sa/4.0/"><img alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by-sa/4.0/88x31.png" /></a><br /><span xmlns:dct="http://purl.org/dc/terms/" property="dct:title">SW_MCP4017 Library</span> by <a xmlns:cc="http://creativecommons.org/ns#" href="http://www.sparkyswidgets.com/" property="cc:attributionName" rel="cc:attributionURL">Ryan Edwards, Sparky's Widgets</a> is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-sa/4.0/">Creative Commons Attribution-ShareAlike 4.0 International License</a>.