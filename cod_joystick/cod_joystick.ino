#define joystick_X A0
#define joystick_Y A1

void setup() {
  Serial.begin(9600);
}

void loop() {
  int eixo_X= analogRead(joystick_X);
  int eixo_Y= analogRead(joystick_Y);
  Serial.println("Eixo X = " + eixo_X);
  Serial.println("Eixo Y = " + eixo_Y);
}
