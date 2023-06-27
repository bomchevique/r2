int ENA =  9;
int IN1 =  4;
int IN2 =  5;
int IN3 =  6;
int IN4 =  7;
int ENB = 10;

int VEL = 128;

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);

  Serial.begin(9600);
  Serial.println("ROBÔ DE BATALHA INICIADO!");
}

void loop() {
  if (Serial.available() > 0) {
    char comando = Serial.read();
    if (comando == 'F') MotoresFrente();
    else if (comando == 'B') MotoresTras();
    else if (comando == 'L') MotoresEsquerda();
    else if (comando == 'R') MotoresDireita();
    else if (comando == 'S') MotoresParar();
  }
}

void MotoresFrente() {
   analogWrite(ENA,  VEL);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2,  LOW);
   analogWrite(ENB,  VEL);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4,  LOW);
}

void MotoresTras() {
   analogWrite(ENA,  VEL);
  digitalWrite(IN1,  LOW);
  digitalWrite(IN2, HIGH);
   analogWrite(ENB,  VEL);
  digitalWrite(IN3,  LOW);
  digitalWrite(IN4, HIGH);
}

void MotoresEsquerda() {
   analogWrite(ENA,  VEL);
  digitalWrite(IN1,  LOW);
  digitalWrite(IN2,  LOW);
   analogWrite(ENB,  VEL);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4,  LOW);
}

void MotoresDireita() {
   analogWrite(ENA,  VEL);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2,  LOW);
   analogWrite(ENB,  VEL);
  digitalWrite(IN3,  LOW);
  digitalWrite(IN4,  LOW);
}

void MotoresDireita() {
   analogWrite(ENA,  VEL);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2,  LOW);
   analogWrite(ENB,  VEL);
  digitalWrite(IN3,  LOW);
  digitalWrite(IN4,  LOW);
}
