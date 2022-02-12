int sensor = D2;  // Digital pin D7
int led=D0;
int buzz=D6;
void setup() {
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzz, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  long state = digitalRead(sensor);
  if (state == HIGH) {
    digitalWrite(led,LOW);
    digitalWrite(buzz,HIGH);
    Serial.println("Motion detected!");
    
  }
  else {
    digitalWrite(led,HIGH);
    digitalWrite(buzz,LOW);
    Serial.println("No motion detected.");
    
  }
}
