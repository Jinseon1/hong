int ledPin = 7; // GPIO 7번 핀

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // 1. 처음 1초간 LED 켜기
  digitalWrite(ledPin, LOW);   // 반대로: LOW = 켜짐
  delay(1000);

  // 2. 다음 1초간 LED 5회 깜빡이기
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin, LOW);   // 켜기
    delay(100);
    digitalWrite(ledPin, HIGH);  // 끄기
    delay(100);
  }

  // 3. LED 끄기
  digitalWrite(ledPin, HIGH);

  // 4. 무한루프 (LED 꺼짐 유지)
  while (1) {
    digitalWrite(ledPin, HIGH);
  }
}
