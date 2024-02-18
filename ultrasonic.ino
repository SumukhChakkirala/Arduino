int trig=10;
int echo = 9;
int time;
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,LOW);
  delayMicroseconds(5);
  digitalWrite(trig,HIGH);
  delayMicroseconds(5);
  digitalWrite(trig,LOW);
  delayMicroseconds(5);
  time = pulseIn(echo,HIGH);
  distance = time * 0.034/2;
  Serial.println(distance);
}
