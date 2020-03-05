void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT); //LED connected to pin 4 so set as output
  pinMode(A0, INPUT); //heat sensor connected to A0 so set as input
  Serial.begin(9600); //this is used to print out values
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int rawvoltage = analogRead(A0); //get the value from the sensor connected to pin A0
  float celsius = ((rawvoltage/1024.0) * 5000 / 10); //converts analog signal to temperature
  Serial.println(celsius); //print out celsius to see what the temp is
  
  if(celsius > 25){
    
    digitalWrite(4, HIGH); //turn LED connected to pin 4 on
    delay(2000); //wait for 2000 milliseconds
    
  }else if(celsius <= 25){
    
    digitalWrite(4,LOW); //turn LED connected to pin 4 off
    delay(2000); //wait for 2000 milliseconds
    
  }
   
}
