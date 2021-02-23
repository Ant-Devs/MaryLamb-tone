float c = 261.63;
float d = 293.665;
float e = 329.628;
float g = 391.995;

int pin = pin;

void setup() {
  pinMode(pin, OUTPUT);
  lamb();
}

void loop() {
  
}

void lamb(){
  tone(pin, e, 500);
  delay(500);
  tone(pin, d, 500);
  delay(500);
  tone(pin, c, 500);
  delay(500);
  tone(pin, d, 500);
  delay(500);
  tone(pin, e, 500);
  delay(500);
  tone(pin, e, 500);
  delay(500);
  tone(pin, e, 500);
  delay(900);
  tone(pin, d, 500);
  delay(500);
  tone(pin, d, 500);
  delay(500);
  tone(pin, d, 500);
  delay(900);
  tone(pin, e, 500);
  delay(500);
  tone(pin, g, 500);
  delay(500);
  tone(pin, g, 500);
  delay(900);
  tone(pin, e, 500);
  delay(500);
  tone(pin, d, 500);
  delay(500);
  tone(pin, c, 500);
  delay(500);
  tone(pin, d, 500);
  delay(500);
  tone(pin, e, 500);
  delay(500);
  tone(pin, e, 500);
  delay(500);
  tone(pin, e, 500);
  delay(900);
  tone(pin, d, 500);
  delay(500);
  tone(pin, d, 500);
  delay(500);
  tone(pin, e, 500);
  delay(500);
  tone(pin, d, 500);
  delay(500);
  tone(pin, c, 500);
  delay(500);
}
