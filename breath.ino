/*
 * this is a breathing light.
 */ 
void setup() {
  //define output pin
  pinMode(11,OUTPUT);
}

void loop() {
  int c;  //define the variable we are going to use.
  /*
   * because the brightness of the LED is not linear to the driving voltage,
   * so I slower the change speed when the output is small
   */
  for(c=255;c>50;c-=1){
  analogWrite(11,c);
  delay(15);
  }
  for(c=50;c>1;c-=1){
  analogWrite(11,c);
  delay(30);
  }
  for(c=1;c<50;c+=1){
  analogWrite(11,c);
  delay(30);
  }
  for(c=50;c<255;c+=1){
  analogWrite(11,c);
  delay(15);
  }
}
