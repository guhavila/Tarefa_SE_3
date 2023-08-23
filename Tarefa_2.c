#include <Servo.h>

Servo meu_servo; 

int pos = 0;
  
int pino_bot1 = 7;
int pino_bot2 = 4;
int pino_bot3 = 2;

void setup() {
  meu_servo.attach(11);  // Anexa o servo ao pino 11
  Serial.begin(9600);
  pinMode(pino_bot1, INPUT_PULLUP);
  pinMode(pino_bot2, INPUT_PULLUP);
  pinMode(pino_bot3, INPUT_PULLUP);
  meu_servo.write(0);
}

void loop() {
  int botao1 = digitalRead(pino_bot1);
  int botao2 = digitalRead(pino_bot2);
  int botao3 = digitalRead(pino_bot3);
  
  Serial.println(botao1);

  if (botao1 == LOW) {
    pos = 0; // Define a posição do servo para 0 graus
    meu_servo.write(pos);
  } else if (botao2 == LOW) {
    pos = 90; // Define a posição do servo para 90 graus
    meu_servo.write(pos);
  } else if (botao3 == LOW) {
    pos = 180; // Define a posição do servo para 180 graus
    meu_servo.write(pos);
  }
  
  Serial.print("Posicao do servo: ");
  Serial.println(pos);
  
  delay(100);
  
  }
