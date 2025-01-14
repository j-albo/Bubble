//Peristaltic pump
#define ENA_PIN 9
#define IN1_PIN 6
#define IN2_PIN 3
//Air Pump
#define ENB_PIN 5
#define IN3_PIN 10
#define IN4_PIN 11

const int inputPin = 4;

void setup() {
  pinMode(ENA_PIN, OUTPUT);
  pinMode(IN1_PIN, OUTPUT);
  pinMode(IN2_PIN, OUTPUT);
  pinMode(ENB_PIN, OUTPUT);
  pinMode(IN3_PIN, OUTPUT);
  pinMode(IN4_PIN, OUTPUT);
  pinMode(inputPin, INPUT);
  Serial.begin(9600);
}

void makeBubble(bool bubbleState) {
  if (bubbleState == false) {
    onedrop();
    delay(4000);
    inflate();
    delay(4000);
    onedrop();
    delay(4000);
    onedrop();
    //AIRPUMP ON
    digitalWrite(IN3_PIN, LOW);
    digitalWrite(IN4_PIN, HIGH);
    analogWrite(ENB_PIN, 70);
    delay(4000);
    //AIRPUMP OFF
    digitalWrite(IN3_PIN, LOW);
    digitalWrite(IN4_PIN, LOW);
    analogWrite(ENB_PIN, 0);
    delay(1000);
  } else {
    digitalWrite(IN1_PIN, LOW);
    digitalWrite(IN2_PIN, LOW);
    analogWrite(ENA_PIN, 0);
    digitalWrite(IN3_PIN, LOW);
    digitalWrite(IN4_PIN, LOW);
    analogWrite(ENB_PIN, 0);
  }
}

void loop() {
  bool inputState = digitalRead(inputPin);
  makeBubble(inputState);
  delay(1000);
}

void onedrop() {
  //PERISTALTIC ON
  digitalWrite(IN1_PIN, HIGH);
  digitalWrite(IN2_PIN, LOW);
  analogWrite(ENA_PIN, 180);
  delay(50);
  //PERISTALTIC OFF
  digitalWrite(IN1_PIN, LOW);
  digitalWrite(IN2_PIN, LOW);
  analogWrite(ENA_PIN, 0);
}

void inflate() {
  //AIRPUMP ON
  digitalWrite(IN3_PIN, LOW);
  digitalWrite(IN4_PIN, HIGH);
  analogWrite(ENB_PIN, 70);
}