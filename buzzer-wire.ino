/*
  Buzzer Wire
  
  by Thierry PIGOT
  This example code is in the public domain.
  https://www.thierry-pigot.fr
*/


void setup() {

  pinMode(12, OUTPUT);  // Buzzer
  pinMode(2,INPUT);     // Wire
  pinMode(6,OUTPUT);    // Red Light
  pinMode(7,OUTPUT);    // Green Light

}

int switchstate = 0;

void loop() {
    
  switchstate = digitalRead(2);
   
  // Contact
  if( HIGH == switchstate ) {
    
    digitalWrite(6, HIGH);      // Switch on red light
    digitalWrite(7, LOW);       //  Switch off green light
    tone(12, 900); delay(500);  // Start buzzer
    
  }else{
    
    digitalWrite(6, LOW);     //  Switch off red light
    digitalWrite(7, HIGH);    //  Switch on green light
    noTone(12);               // Stop buzzer

  }
}
