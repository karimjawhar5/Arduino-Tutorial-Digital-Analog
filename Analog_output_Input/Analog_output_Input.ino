const int led = 10;
const int potentiometer = A0;
int value;
int brightness;


void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  //analogWrite(led, 0);
  //analogWrite(led, 50);
  //analogWrite(led, 255);
  
//  for(brightness=0; brightness<=255; brightness+=5){
//    analogWrite(led, brightness);
//    delay(50);
//  }
//  for(brightness=255; brightness>=0; brightness-=5){
//    analogWrite(led, brightness);
//    delay(50);
//  }

  value = analogRead(potentiometer);
  analogWrite(led, value/4);
  Serial.println(value);
  
}
