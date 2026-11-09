/*
  PROJECT: WINDOW CLEANING ROBOT
  CONTROLLER: ESP32
  MOTOR DRIVER: L298N
*/

// Motor Driver Pins
#define ENA 25
#define IN1 26
#define IN2 27

#define ENB 14
#define IN3 12
#define IN4 13

// Other Components
#define WATER_PUMP 32
#define CLEANING_BRUSH 33
#define BUZZER 23

void setup()
{
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(WATER_PUMP, OUTPUT);
  pinMode(CLEANING_BRUSH, OUTPUT);
  pinMode(BUZZER, OUTPUT);

  digitalWrite(WATER_PUMP, LOW);
  digitalWrite(CLEANING_BRUSH, LOW);
  digitalWrite(BUZZER, LOW);
}

void loop()
{
  // Move Robot Forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  analogWrite(ENA, 170);
  analogWrite(ENB, 170);

  delay(3000);

  // Stop Movement
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);

  // Spray Cleaning Liquid
  digitalWrite(WATER_PUMP, HIGH);
  delay(2000);
  digitalWrite(WATER_PUMP, LOW);

  // Rotate Cleaning Brush
  digitalWrite(CLEANING_BRUSH, HIGH);
  delay(5000);
  digitalWrite(CLEANING_BRUSH, LOW);

  // Buzzer Alert
  digitalWrite(BUZZER, HIGH);
  delay(500);
  digitalWrite(BUZZER, LOW);

  delay(3000);
}
