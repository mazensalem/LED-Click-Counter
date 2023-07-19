// C++ code
//
bool led1 = 0;
bool led2 = 0;
bool led3 = 0;
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, INPUT);
  Serial.begin(9500);
}

void loop()
{
  delay(250);
  if (digitalRead(5)){
    if (!led1){
      led1 = 1;
    }else if (!led2){
      led2 = 1;
    }else if (!led3){
      led3 = 1;
    }else{
      led1 = 0;
      led2 = 0;
      led3 = 0;
    }
  }
  digitalWrite(2, led1);
  digitalWrite(3, led2);
  digitalWrite(4, led3);
}