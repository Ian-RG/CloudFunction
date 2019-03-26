int boardLed = D7;

void setup() {
    pinMode(boardLed,OUTPUT);
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", riotHandler);
}

void loop() {
}

void riotHandler(const char *event, const char *data) {
    if (strcmp(data,"wave")==0) {
        digitalWrite(boardLed,HIGH);
        delay(200);
        digitalWrite(boardLed,LOW);
        delay(200);
        digitalWrite(boardLed,HIGH);
        delay(200);
        digitalWrite(boardLed,LOW);
        delay(200);
        digitalWrite(boardLed,HIGH);
        delay(200);
        digitalWrite(boardLed,LOW);
    }
    else if (strcmp(data,"pat")==0) {
        digitalWrite(boardLed,HIGH);
        delay(1000);
        digitalWrite(boardLed, LOW);
    }
    delay(100);
}
