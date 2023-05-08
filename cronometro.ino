#define buzzer 13
#define redLed 7
#define greenLed 10
#define botao 5

int i;
int a;

void setup(){
  pinMode(buzzer, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
}

void loop(){
  
  if(digitalRead(botao) == LOW){

    //Contador para acender o led 5 vezes, após pressionar o botão
    for(i = 0; i < 5; i++){
        digitalWrite(redLed, HIGH);
        delay(100);
        digitalWrite(redLed, LOW);
        delay(100);
        digitalWrite(greenLed, HIGH);
        delay(100);
        digitalWrite(greenLed, LOW);
        delay(100);
    }
    //Contador para tocar o buzzer 5 vezes, após pressionar o botão e acender o led
    for(a = 0; a < 5; a++){
       tone(buzzer, 264);
       delay(200);
       noTone(buzzer);
      
    }
  }
}
