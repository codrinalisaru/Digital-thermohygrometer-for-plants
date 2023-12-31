const int hygrometer = A0;  
int value;

void setup(){
  
  Serial.begin(9600);
}

void loop(){
  
  // When the plant is watered well the sensor will read a value 380~400, I will keep the 400 
  // value but if you want you can change it below. 
  
  value = analogRead(hygrometer);   //Read analog value 
  value = constrain(value,400,1023);  //Keep the ranges!
  value = map(value,400,1023,100,0);  //Map value : 400 will be 100 and 1023 will be 0
  Serial.print("Soil humidity: ");
  Serial.print(value);
  Serial.print("%");
  Serial.println();
  delay(2000); //Read every 2 sec.
}
