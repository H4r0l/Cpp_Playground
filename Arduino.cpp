#include <L298NX2.h>

L298NX2 MyMotors(11, 10, 9, 8);

void setup() {
  // No se requiere configuración adicional para la librería
}

void loop() {
  // Controlar el motor A hacia adelante
  MyMotors.setSpeed(255); // Establecer velocidad al máximo
  MyMotors.forward(); // Mover hacia adelante
  delay(15000); // Esperar 1 segundo

  // Detener el motor A
  //MyMotors.setSpeed(0); // Establecer velocidad a 0
  //delay(500); // Esperar 0.5 segundos

  // Controlar el motor B hacia adelante
  //motorB.setSpeed(255);
  //motorB.forward();
  //delay(15000);

  // Detener el motor B
  //motorB.setSpeed(0);
  //delay(500);
}


