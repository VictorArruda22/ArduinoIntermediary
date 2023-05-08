/*
DÓ - 264hz
RÉ - 297hz
MI - 330hz
FÁ - 352hz
SOL - 396hz
LÁ - 440hz
SI - 495hz
*/


//Definição do nome dos botões
#define buzzer 13
#define botao_do 11
#define botao_re 10
#define botao_mi 9
#define botao_fa 8
#define botao_sol 7
#define botao_la 6
#define botao_si 5

//Declaração das váriaveis 
int nota_do = 264;
int nota_re = 297;
int nota_mi = 330;
int nota_fa = 352;
int nota_sol = 396;
int nota_la = 440;
int nota_si = 495;

//Definição do tipo de porta Input ou Output
void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(botao_do, INPUT_PULLUP);
  pinMode(botao_re, INPUT_PULLUP);
  pinMode(botao_mi, INPUT_PULLUP);
  pinMode(botao_fa, INPUT_PULLUP);
  pinMode(botao_sol, INPUT_PULLUP);
  pinMode(botao_la, INPUT_PULLUP);
  pinMode(botao_si, INPUT_PULLUP);
}

//Aplicação da lógica
void loop() {
  //Se o botão declarado para a nota Dó for apertado, tocar o som na frequência desejada
  if(digitalRead(botao_do) == LOW){
     tone(buzzer, nota_do);
     delay(250);
     noTone(buzzer); 
    }
  else if(digitalRead(botao_re) == LOW){
       tone(buzzer, nota_re);
       delay(250);
       noTone(buzzer); 
    }
  else if(digitalRead(botao_mi) == LOW){
       tone(buzzer, nota_mi);
       delay(250);
       noTone(buzzer); 
    }
  else if(digitalRead(botao_fa) == LOW){
       tone(buzzer, nota_fa);
       delay(250);
       noTone(buzzer); 
    }
  else if(digitalRead(botao_sol) == LOW){
       tone(buzzer, nota_sol);
       delay(250);
       noTone(buzzer); 
    }
  else if(digitalRead(botao_la) == LOW){
       tone(buzzer, nota_la);
       delay(250);
       noTone(buzzer); 
    }
  else if(digitalRead(botao_si) == LOW){
       tone(buzzer, nota_si);
       delay(250);
       noTone(buzzer); 
    }
}