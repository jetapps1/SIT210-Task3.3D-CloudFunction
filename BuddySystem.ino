int ledPin1 = D2;
int ledPin2 = D4;
void handler(const char *event, const char *data);

void setup()
{
   pinMode(ledPin1, OUTPUT);
   pinMode(ledPin2, OUTPUT);
   digitalWrite(ledPin1, LOW);
   digitalWrite(ledPin2, LOW);
   Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", handler);
}

void loop()
{
    
  Particle.publish("Deakin_RIOT_SIT210_Photon_Buddy", "wave");
  delay(30000);
  Particle.publish("Deakin_RIOT_SIT210_Photon_Buddy", "pat");
  delay(30000);
  
}

void handler(const char *event, const char *data)
{
    if (strcmp(data, "wave") == 0)
    {
        digitalWrite(ledPin1, HIGH);
        delay(500);
        digitalWrite(ledPin1, LOW);
        delay(500);
        digitalWrite(ledPin1, HIGH);
        delay(500);
        digitalWrite(ledPin1, LOW);
        delay(500);
        digitalWrite(ledPin1, HIGH);
        delay(500);
        digitalWrite(ledPin1, LOW);
        delay(500);
    }
    if(strcmp(data, "pat") == 0){
        digitalWrite(ledPin2, HIGH);
        delay(500);
        digitalWrite(ledPin2, LOW);
        delay(500);
        digitalWrite(ledPin2, HIGH);
        delay(500);
        digitalWrite(ledPin2, LOW);
        delay(500);
        digitalWrite(ledPin2, HIGH);
        delay(500);
        digitalWrite(ledPin2, LOW);
        delay(500);
    }
}
