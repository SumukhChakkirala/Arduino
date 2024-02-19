#include<DHT.h>
#define Type DHT11
int myPin = 2;
DHT HT(myPin,Type);
float humidity;
float temperature;




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  HT.begin();
  delay(500);

}

void loop() {
  // put your main code here, to run repeatedly:
  humidity= HT.readHumidity();
  temperature =HT.readTemperature();
  Serial.print("the temperature is ");
  Serial.print(temperature);
  Serial.print(" and the humidity is ");
  Serial.println(humidity);
}
