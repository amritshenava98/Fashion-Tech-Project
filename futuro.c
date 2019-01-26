/* 
FASHION/TECH HACKATHON

AUTHOR : AMRTH ASHOK SHENAVA
DATE : 25/01/2019

Project code for temperature altering wearable
*/

//Setup of the board
void setup(){

}


// The code after loop consists of the working part of the project.
void loop(){
 
 //Measuring the temperature in Celsius
 int celsius = Esplora.readTemperature(DEGREES_C)
 
 //Measuring the temperature in Farenheit
 int farenheit = Esplora.readTemperature(DEGREES_F)
 
 if(farenheit == 72)
 {
  print("The Temperature is normal")
 }
 else if(farenheit < 72){
  print("The Temperature is decreasing 
 }

}
