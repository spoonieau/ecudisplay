#include <OBD2.h>
#include <CAN.h>
#include <SoftwareSerial.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display
/*********************************************************/


void setup()
{
  lcd.init();  //initialize the lcd
  lcd.backlight();  //open the backlight 
   
  Serial.begin(9600); //create Serial connection 
  while (!Serial);
  
  Serial.println("OBD2 ECU LCD Display");
  Serial.println("0.1V");
  Serial.println("By Spoonie");

  while (true) //if able to connect to ecu
  {
    Serial.println("Trying to connect to ECU");
    Serial.println();
    lcd.setCursor (0,1);
    lcd.print("Trying to connect");
    
    lcd.setCursor (0,2);
    lcd.print("to car ECU");

      if (!OBD2.begin()) //if connection failed 
      {
        Serial.println("Could not create connection with ECU");
        lcd.clear();

        lcd.setCursor (0,1);
        lcd.print("Connection Failed");

        delay(1000);
      }
      else //connection to ECU established 
      {
        Serial.println("Connection established with ECU"); 
        lcd.clear();

        lcd.setCursor (0,1);
        lcd.print("ECU Connected");

        break;
        
      }
  }
  Serial.println();
  lcd.clear();
  
}
/*********************************************************/
void loop() 
{
  //set up vars 
  int engTemp = 0;
  int inTemp = 0;
  int calEngLoad = 0;
  int tAdvance = 0;
  int rpm = 0;

  rpm = OBD2.pidRead(0x0c); //get rpm to tell if engine is running 

  if (rpm > 1) //if rpm is greater than 1 do below
  {
    //pull needed values from OBD2 calss 
    engTemp = OBD2.pidRead(0x05);
    inTemp = OBD2.pidRead(0x0f);
    calEngLoad = OBD2.pidRead(0x04);
    tAdvance = OBD2.pidRead(0x0e);

    //build strings to display on LCD and with serial console connected 
    String engTempS = "Coolant Temp " + String(engTemp) + "C" + ((char)223);
    String inTempS = "Intake Temp " + String(inTemp) + "C" + ((char)223);
    String calEngLoadS = "Engine Load " + String(calEngLoad) + "%";
    String tAdvanceS = "Timing Advance " + String(tAdvance) + ((char)223);
  
    lcd.setCursor (0,0);
    lcd.print(engTempS);
    lcd.setCursor (0,1);
    lcd.print(inTempS);
    lcd.setCursor (0,2);
    lcd.print(calEngLoadS);
    lcd.setCursor (0,3);
    lcd.print(tAdvanceS);

    Serial.println("===============================");
    Serial.println(engTempS);
    Serial.println(inTempS);
    Serial.println(calEngLoadS);
    Serial.println(tAdvanceS);
    Serial.println();

    //delay(1000);
  }
  else //if rpm is less then 1 engine not running or conection lost
  {
    Serial.println("===============================");
    Serial.println("Connection lost or not running");
    Serial.println("===============================");
    Serial.println();

    lcd.clear();
    lcd.setCursor (0,0);
    lcd.print("Engine not Running?");
    lcd.setCursor (0,1);
    lcd.print("Connection Lost?");

    delay(2000);

    lcd.clear();
  }
}
/************************************************************/
