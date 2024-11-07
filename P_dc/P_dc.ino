// Definir pines para botones y LED
const int botonAH = 10;   // Pin para antihorario
const int botonH = 9;   // Pin para horario
const int motorPin = 4;     // Pin salida
const int motorPin2 = 5;     // Pin salida

void setup() {
  // Configurar pines de entrada para los botones
  pinMode(botonAH, INPUT);  // Sin pull-up interno
  pinMode(botonH, INPUT);  // Sin pull-up interno
  
  // Configurar pin de salida para los motores
  pinMode(motorPin, OUTPUT);
  pinMode(motorPin2, OUTPUT);

  // Apagar el LED al inicio
  //digitalWrite(motorPin, LOW);
  //digitalWrite(motorPin2, LOW);
}

void loop() {
  // Leer el estado de los botones
  int estadoBotonAH = digitalRead(botonAH);
  int estadoBotonH = digitalRead(botonH);
  
  // Si el boton AH está encenddido, pin  high
  if (estadoBotonAH == HIGH && estadoBotonH == LOW) {
    digitalWrite(motorPin, HIGH);  // Encender el motor
  } else if (estadoBotonH == HIGH && estadoBotonAH == LOW){
    digitalWrite(motorPin2, HIGH);   // Encender motor
  }else{
    digitalWrite(motorPin, LOW);
    digitalWrite(motorPin2, LOW);
  }
}
