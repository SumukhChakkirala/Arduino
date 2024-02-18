float XVal;
float YVal;
int XPin = A0;
float YPin = A1;
int SPin = 7;

float Pval;
float Zval;
int SVal;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(XPin,INPUT);
  pinMode(YPin,INPUT);
  pinMode(7,INPUT);
  digitalWrite(7,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  XVal = analogRead(XPin);
  YVal = analogRead(YPin);
  SVal = digitalRead(07);
  //Serial.println(myVal);
  Pval = (5.0/1023.0) * XVal;
  Zval = (5.0/1023.0) * YVal;
  Serial.print("x value is ");
  Serial.print(Pval);
  Serial.print("  Y value is ");
  Serial.print(Zval);
  Serial.print("  S value is ");
  Serial.println(SVal);
}
