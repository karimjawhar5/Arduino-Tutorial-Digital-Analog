const int led = 10;
const int button = 7;
bool state;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop() {
  state = digitalRead(button);
  Serial.println(state);
  digitalWrite(led, state);
  delay(30);
//
//  digitalWrite(led, HIGH);
//  delay(100);
//  digitalWrite(led, LOW);
//  delay(100);
}
