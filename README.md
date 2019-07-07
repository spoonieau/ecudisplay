# ecudisplay
Small demo for reading ECU PID with a Arduino Uno, Can Bus shelid and a I2C 20x4 2004 LCD. 


## Dependencies 

* https://github.com/sandeepmistry/arduino-OBD2
* https://github.com/sandeepmistry/arduino-CAN
* http://wiki.sunfounder.cc/index.php?title=I2C_LCD2004

## Hardware

* [ebay link](https://www.ebay.com.au/itm/AU-I2C-20x4-2004-LCD-Display-Module-Shield-Character-Blue-Blacklight-For-Arduino/153428038336?hash=item23b90612c0&_trkparms=ispr%3D1&enc=AQADAAADQFjVrDbVsZ8oH%2F8PNHtt9VX4%2Fw7FZcmMuqsX8uaFEduVdj%2FjxipN1xUZmtcBP714iavmhohqtIhdl6lKlkUWt14gLN0jK05bL6SF0eI%2Btq2RImDgeoHIqU3lt%2BQ3YqyBzk%2Bxn6KqAAGChrin7Ed5iAm%2FeHIZLfb9iquEPIm06mmeRP1tWzM0M3ywHws8xeCzpjNlUqjN968pvVaSsYmtTdeO%2BDRVnWpMVH3YhiCR16nkgAx5AnrrtClv7cNPGSjyUVGR811lEGHRKwo1jizRvWjV%2FBglyTwfWOwBPMseioxbK%2Bb0aImxcG2WJVMUaoorLejfc6rqnhxCtINEMl7Lv2r7fJp%2FL5NqNIjJfNKzKX3l06Gm0Q69N%2FBnhW8mjOXuBYuLLKVLpGlJOG5i%2BbWIFEt%2FER4fa%2B9ul6xkPiJ5Hqx6YwCdbJuQbe0wcGjIyUPBCYsGyW4AJi%2FWAAlw3qmmXznVY61O3%2FVd1Ua%2FBKXeUjNGFwgMIo5BEwGfDrarA6WaTrOZteEZ8oV7eC2zOEIBK%2FykTSZBKW96TdFoYx0Z%2FhWUM3BcHpMxem7cezklZ5HwLJuws5xIx3eqEML2FfEjchlOntovcuTmyB6iFKH%2FThGU09ljIaqoSKMvNHFxDitWxuQqBmdieLXMivd84vPhTeaRgv3o20JXx0AS6I1hOErHTfEDWj1dEeHeISIdAlarmoLEDsJ7Osk0UyT6ARJeVew8CSgF%2BS7dWMGjr0x0Fh42Gv639qVnEXsUWu5LeJ9vPcXS0I%2FA7gaJtoaRav8ebhEeXYbUHnEhlwsQ2nCjUQ40jvKiNXHuSP4K%2B9qN27IcThqtbm%2FbnYt8c%2Fbb1xmeEB1lsUB7k8LNYFKejBiODKbHdO9jsj%2BNE2OTAVHV6v%2BclHNgnFvGtCgWtsXdHOTFwh8SCAWjibHz61KnOU6FQztw6jTeCOx365yFrg%2BCi7Jv8FWiN9XO8CIs3qK1RmS2MxpzfBY7ptjGbNw1Tkq5zKMEltKDJ%2FlXw4YAiAS2Zokh8iZhj1N4KGLm%2FYXpYhBPfV2Pag1lj0RHAhYno%2FutseVR5rH27PEmX66EfDecFLFHhCWRNIKQVzYnx3VFjqzpc%2Bk%3D&checksum=153428038336f4424398651841caa9bdaa9caf803feb&frcectupt=true) Un-named I2C 20x4 2004 LCD
* [ebay link](https://www.ebay.com.au/itm/SPI-MCP2515-EF02037-CAN-BUS-Shield-Controller-Communication-Board-FA/123779175513?hash=item1cd1d05459:g:i7QAAOSwi~Vc59cc&frcectupt=true) Un-named Can Bus Sheild (MCP2515)
* [ebay link](https://www.ebay.com.au/itm/Arduino-Compatible-Uno-R3-ATMega328P-USB-Cable-AU-Stock-Fast-Ship/191430215410?epid=24028584907&hash=item2c922146f2:g:K3sAAOSwiCRUeVLM&frcectupt=true) Arduino-Compatible Uno R3
* [ebay link](https://www.ebay.com.au/itm/10-set-Serial-RS232-DB9-9-PIN-Female-Assembly-Solder-Plug-Connector-with-Shell/362317344417?hash=item545bcbeea1:g:tUkAAOSwvKha9poN) DB9 9-PIN Female Assembly
* [ebay link](https://www.ebay.com.au/itm/16-Pin-Car-OBDII-OBD2-Diagnosis-Tool-Adaptor-Connectors-Male-Plug-Socket/323821087342?hash=item4b653daa6e:g:fgwAAOSwqu1c77Zx) 16 Pin Car OBDII Male Plug Socket
* Wire
* Soldering Iron

## PIN Outs

https://wiki.dfrobot.com/I2C_TWI_LCD2004_Module__Arduino_Gadgeteer_Compatible___SKU_DFR0154_

OBD2 -> DB9 Cable 

| Pin Description | OBDII | DB9 |
| --- | --- | --- |
| J1850 BUS+ | 2 | 7 |
| Chassis Ground | 4 | 2 |
| Signal Ground | 5 | 1 |
| CAN High J-2284 | 6 | 3 |
| ISO 9141-2 K Line | 7 | 4 |
| J1850 BUS | 10 | 6 |
| CAN Low J-2284 | 14 | 5 |
| ISO 9141-2 L Line | 15 | 8 |
| Battery Power | 16 | 9 |

