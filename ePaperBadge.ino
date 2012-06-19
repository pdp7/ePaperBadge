#include "ePaper.h"  // This file includes defines for each displayable character


int EIOpin = 2;     // Input/output pin for chip selection
int XCKpin = 3;     // Clock input pin for taking display data
int LATCHpin = 4;   // Latch pulse input pin for display data
int SLEEPBpin = 5;  // Sleep Pin for the display
int DI0pin = 6;     // Input pin for display data

//setup display with pin definitions
ePaper epaper = ePaper(EIOpin, XCKpin, LATCHpin, SLEEPBpin, DI0pin);


void setup(){
  Serial.begin(9600);
  delay(1000);
  Serial.println("hello\n");

}

void loop(){

  for(int i = 0; i < 1; i++) {
    epaper.writeTop("drew      ");
    epaper.writeBottom("   fustini");
    epaper.writeDisplay();
    delay(5000);
  }
  
  for(int i = 0; i < 1; i++) {
    epaper.writeTop("      pdp7");
    epaper.writeBottom("          ");
    epaper.writeDisplay();
    delay(5000);
  } 
  /*
  for(int i = 0; i < 1; i++) {
    epaper.writeTop("      pdp7");
    epaper.writeBottom("          ");
    epaper.writeDisplay();
    delay(100);
  } */

  /*
  }
   for(int i = 0; i < 1; i++) {
   
   epaper.writeTop(" tweet at ");
   epaper.writeBottom("pdp7      ");
   epaper.writeDisplay();
   delay(10000);
   
   }
   */
}


