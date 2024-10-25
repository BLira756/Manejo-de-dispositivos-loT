#include <Wire.h>
#include <MPU6050.h>
#include "thingProperties.h"

MPU6050 mpu;  // Instancia del sensor

void setup() {
  // Inicializa el puerto serial
  Serial.begin(9600);
  delay(1500); 
 Wire.begin();  // Inicializa I2C
  
  
  // Inicializa el MPU6050
  mpu.initialize();

  // Verifica la conexión con el sensor
  if (!mpu.testConnection()) {
    Serial.println("Error al conectar con el MPU6050");
    while (1);  // Si no se conecta, se queda en un bucle infinito
  } else {
    Serial.println("MPU6050 conectado correctamente");
  }
  
  // Configura el pin del LED
  pinMode(27, OUTPUT);

  // Inicializa las propiedades de IoT Cloud
  initProperties();
  
  // Conecta al Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  ArduinoCloud.update();
  
  // Control del LED desde el dashboard
  if (led == 1) {
    digitalWrite(27, HIGH);
  } else {
    digitalWrite(27, LOW);
  }

  // Lee los valores del acelerómetro
  int16_t ax, ay, az;
  mpu.getAcceleration(&ax, &ay, &az);
  
  // Asigna los valores leídos a la variable "aceleracion" de Arduino Cloud
  float aceleracionx = ax / 16384.0;  // Escala la aceleración para obtener valores en "g"
  float aceleraciony = ay / 16384.0;
  float aceleracionz = az / 16384.0;
  
  // Muestra los valores en el monitor serial
  Serial.print("Acelerómetro X: ");
  Serial.print(aceleracionx);
  Serial.print(" | Acelerómetro Y: ");
  Serial.print(aceleraciony);
  Serial.print(" | Acelerómetro Z: ");
  Serial.println(aceleracionz);

aceleracion = aceleracionx;
  
  // Espera antes de la siguiente lectura
  delay(500);
}

void onAceleracionChange()  {
  // Código para cuando la aceleración cambie
}

void onLedChange()  {
  // Código para cuando el LED cambie
  Serial.println("Led Conectado");
}

