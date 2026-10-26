#include <Arduino.h> 

 

void setup() //initializes the communications 

{ 

    Serial.begin(9600); 

    // set the built in LED as output 

    pinMode( 13 , OUTPUT); 

} 

 

void loop() //on and off for led light 

{ 

    digitalWrite(13, HIGH); 

    delay(1000);                    // wait 1 second 

    //Serial.print("LED is ON"); // LED on 

    digitalWrite(13, LOW);   

    delay(1000);                     // wait 1 second 

    //Serial.print("LED is OFF"); // LED off 

                        

} 
