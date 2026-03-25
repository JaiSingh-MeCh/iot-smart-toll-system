// 🚗 IoT Smart Toll System with Alcohol Detection
// ESP32 + MQ-3 Sensor + Servo Motor

#include <Servo.h>

#define MQ3_PIN 34        // Analog pin for MQ-3 sensor
#define SERVO_PIN 13      // PWM pin for Servo

Servo gateServo;

// Threshold value (adjust after testing)
int alcoholThreshold = 300;

void setup() {
  Serial.begin(115200);

  pinMode(MQ3_PIN, INPUT);

  gateServo.attach(SERVO_PIN);
  
  // Initial state: Gate closed
  gateServo.write(0);

  Serial.println("Smart Toll System Started...");
}

void loop() {
  int sensorValue = analogRead(MQ3_PIN);

  Serial.print("Alcohol Sensor Value: ");
  Serial.println(sensorValue);

  if (sensorValue > alcoholThreshold) {
    // Alcohol detected → Gate closed
    Serial.println("Alcohol Detected! Gate CLOSED ❌");
    gateServo.write(0);
  } else {
    // No alcohol → Gate open
    Serial.println("No Alcohol. Gate OPEN ✅");
    gateServo.write(90);
  }

  delay(1000);
}
