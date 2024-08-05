// C++ code
//

int poten = A0;
int led = 10;
int tempo = 100;

void setup()
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(poten,INPUT);
}

void loop()
{
    tempo = analogRead(poten);
    Serial.println(tempo);
    digitalWrite(led, HIGH);
    delay(tempo);
    digitalWrite(led, LOW);
    delay(tempo);
}