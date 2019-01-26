/* 
FASHION/TECH HACKATHON

AUTHOR : AMRTH ASHOK SHENAVA
DATE : 25/01/2019

Project code for temperature altering wearable
*/

//Including the Esplora library code.
#include <Esplora.h>

//Setup of the board
void setup(){
  
 //Setting up the LED of the board.
 pinMode(LED_BUILTIN, OUTPUT)
}


// The code after loop consists of the working part of the project.
void loop(){
 
 //Measuring the temperature in Farenheit
 int farenheit = Esplora.readTemperature(DEGREES_F)
 
 // 
 
  //Array of the colours
  //colours = ["Red", "Green", "Blue"]
  
 //72F is a standard room temperature. If True, no action required. 
 if(farenheit >= 72)
 {
   //The Temperature is normal and will not alter
   print("The Temperature is normal")
   
 }
 
 //The statement to be executed if the temperature is below 72F
 else if(farenheit < 72){
   //The Temperature is decreasing and will alter
   print("The Temperature is decreasing")
   
   //The Loop is to increment the temperature
   for(int i = 0 ; i < 72 ; i++)
   {
    int currenttemp;
    i = currenttemp;
    currenttemp = farenheit;
    currenttemp++;
   }
 }

}
