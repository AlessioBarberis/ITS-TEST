int buttonPin= 7;
int potPin= A0;
int ledPin= 4;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for (int x = 0; x < 100; x++)
  {
  int mod = x % 8;
  Serial.print (x);
  Serial.print(" , ");
  Serial.println(mod);
  delay(100);
  }
}

