
#include <Servo.h>

Servo myservo; // Criando o objeto Servo com o nome "myservo"

int pos = 0;

void setup() {
  myservo.attach(9);  // Definido o "myservo" na porta 9
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // Um for para o servo se movimentar da posição 0 a 180
    myservo.write(pos);              // Lendo a "pos" atual
    delay(15);
  }
  for (pos = 180; pos >= 0; pos -= 1) { // Um for para o servo se movimentar da posição 180 a 0
    myservo.write(pos);              // Lendo a "pos" atual
    delay(15);                       
  }
}
