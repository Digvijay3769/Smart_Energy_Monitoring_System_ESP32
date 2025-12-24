#define CURRENT_SENSOR_PIN 34

void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println("Smart Energy Monitoring System Started");
}

void loop() {
  int sensorValue = analogRead(CURRENT_SENSOR_PIN);
  float current = (sensorValue - 2048) * 0.026;

  Serial.print("Current: ");
  Serial.print(current);
  Serial.println(" A");

  delay(2000);
}
