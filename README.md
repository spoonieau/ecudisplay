# ecudisplay
Small demo for reading ECU PID with a Arduino Uno, Can Bus shelid and a I2C 20x4 2004 LCD. 


## Dependencies 

* https://github.com/sandeepmistry/arduino-OBD2
* https://github.com/sandeepmistry/arduino-CAN
* http://wiki.sunfounder.cc/index.php?title=I2C_LCD2004

## Hardware

* [ebay link]()Un-named I2C 20x4 2004 LCD
* [ebay link]()Un-named Can Bus Sheild (MCP2515)
Arduino Uno

## PIN Outs

https://wiki.dfrobot.com/I2C_TWI_LCD2004_Module__Arduino_Gadgeteer_Compatible___SKU_DFR0154_
```
OBD2 -> DB9
Pin Description 	OBDII 	DB9
J1850 BUS+ 	        2 	  7
Chassis Ground 	    4  	  2
Signal Ground 	    5 	  1
CAN High J-2284 	  6 	  3
ISO 9141-2 K Line 	7 	  4
J1850 BUS 	        10 	  6
CAN Low J-2284 	    14 	  5
ISO 9141-2 L Line 	15  	8
Battery Power 	    16 	  9
```
