#define echoPin 2
#define trigPin 4

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(A5, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Checking for serial input
      // Triggering the ultrasonic sensor
      digitalWrite(trigPin, LOW);
      delayMicroseconds(2);
      digitalWrite(trigPin, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigPin, LOW);

      // Measuring the duration and calculating the distance
      duration = pulseIn(echoPin, HIGH);
      distance = duration * 0.034 / 2;

      if (distance > 200) {
        Serial.println("Out of range");
      } else {
        Serial.print("D: ");
        Serial.print(distance);
        Serial.println(" cm");

        if (distance < 5) {
          tone(A5, 2000);
          delay(20);
          noTone(A5);
          delay(20);
        } else if (distance < 10) {
          tone(A5, 1500);
          delay(60);
          noTone(A5);
          delay(60);
        } else if (distance < 20) {
          tone(A5, 1000);
          delay(100);
          noTone(A5);
          delay(100);
        }
      }
  delay(200);
}