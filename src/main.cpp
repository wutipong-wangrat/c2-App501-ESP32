#include <Arduino.h>

#define SW4 4 //GPIO 4
#define SW15 15//GPIO 15

#define LED16 15//GPIO 16
#define LED17 17//GPIO 17

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("This is setup code");
  pinMode(SW4,INPUT); //touchread GPIO4
  pinMode(SW15,INPUT);
  pinMode(LED16,OUTPUT);
  pinMode(LED17,OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);//GPIO2
}

void loop()
{
  // put your main code here, to run repeatedly:
  if (touchRead(SW4) < 50){
    Serial.print("This is Touch Read code SW4 ดับ: ");
    Serial.println(touchRead(SW4));
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(LED17,LOW);
  }
  else{
    Serial.print("This is Touch Read code SW4 ติด: ");
    Serial.println(touchRead(SW4));
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(LED17,HIGH);
  }
    delay(1000); //1 second

  if (touchRead(SW15) < 50){
    Serial.print("This is Touch Read code SW15 ดับ: ");
    Serial.println(touchRead(SW15));
    digitalWrite(LED16, LOW);
  }
  else
  {
    Serial.print("This is Touch Read code SW15 ติด: ");
    Serial.println(touchRead(SW15));
    digitalWrite(LED16, HIGH);
  }
    delay(1000); //1 second

}