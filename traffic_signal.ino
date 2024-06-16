// 定数の定義
const int greenLEDPin = 2;   // 緑LEDのピン番号
const int yellowLEDPin = 3;  // 黄色LEDのピン番号
const int redLEDPin = 4;     // 赤LEDのピン番号

const int greenDuration = 6000;   // 緑LED点灯時間（ミリ秒）
const int yellowDuration = 2000;  // 黄色LED点灯時間（ミリ秒）
const int redDuration = 6000;     // 赤LED点灯時間（ミリ秒）

void setup() {
  pinMode(greenLEDPin, OUTPUT);
  pinMode(yellowLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
}

void loop() {
  // 緑信号
  digitalWrite(greenLEDPin, HIGH);
  digitalWrite(yellowLEDPin, LOW);
  digitalWrite(redLEDPin, LOW);
  delay(greenDuration);

  // 黄信号
  digitalWrite(greenLEDPin, LOW);
  digitalWrite(yellowLEDPin, HIGH);
  digitalWrite(redLEDPin, LOW);
  delay(yellowDuration);

  // 赤信号
  digitalWrite(greenLEDPin, LOW);
  digitalWrite(yellowLEDPin, LOW);
  digitalWrite(redLEDPin, HIGH);
  delay(redDuration);
}
