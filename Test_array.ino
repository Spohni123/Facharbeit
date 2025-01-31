int SensPin = A0;
int MaxRun = 11;
int count = 1;
int SensVal[10];




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (count != MaxRun) {
    int val = analogRead(A0);
    //Serial.println(val);
    SensVal[count] =  val;
    Serial.println(SensVal[count]);
    delay(1000);
    count++;
  }

  //Serial.println(SensVal[2]);
  //delay(1000);
}
