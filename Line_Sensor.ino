void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  while(!Serial)
  {
  }

  Serial.println("successs to pen Serial0");
  Serial.flush();  //통신이 완료될 때 까지 기다린다.

  pinmode(13, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  Serial.println("turn on the light");
  Serial.flush();
  delay(1000);

  digitalWrite(13, LOW);
  Serial.println("turn off the light");
  Serial.flush();
  delay(1000);
}