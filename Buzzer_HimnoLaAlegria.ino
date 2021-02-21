/*
 * Himno de la alegria
 */


int pinE = 9;

// octava 4
int do4 = 523;
int doS4 = 554;
int re4 = 587;
int reS4 = 622;
int mi4 = 659;
int fa4 = 698;
int faS4 = 739;
int sol4 = 783;
int solS4 = 830;
int la4 = 880;
int laS4 = 932;
int si4 = 987;
// octava 5
int do5 = 1046;
int doS5 = 1108;
int re5 = 1174;
int reS5 = 1244;
int mi5 = 1318;
int fa5 = 1396;
int faS5 = 1479;
int sol5 = 1567;
int solS5 = 1661;
int la5 = 1760;
int laS5 = 1864;
int si5 = 1975;

//tiempos ( son a consideracion del artista )
double redonda = 1800;
double blanca = redonda / 2; // la mitad de la redonda
double negra = redonda / 4; // la cuarta parte de la redonda
double corchea = redonda / 8; // la octava parte de la redonda
double semicorchea = redonda / 16; // tambien llamada doble corchea y es la dieciseisava parte de una redonda
double fusa = redonda / 32; // tambien llamada triple corchea y es la treintaidosava parte de una redonda
double semifusa = redonda / 64; //  tambien llamada cuadruple corchea y es la sesentaicuatroava parte de una redonda


int ledR = 6;
int ledG = 5;
int ledB = 3;

void setup() {
  Serial.begin(9600);
  pinMode(pinE, OUTPUT);
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(pinE,OUTPUT);

}

void enciedeLedRGB(int rojo,int verde, int azul){
  
  analogWrite(ledR, rojo);
  analogWrite(ledG, verde);
  analogWrite(ledB, azul);
  
}
void color(int opcion){

    switch(opcion){
      case 1:{
              //para blanco
              enciedeLedRGB(255,255,255);
              break;}
      case 2:{
              //para rojo bajo
              enciedeLedRGB(255,0,0);
              break;}
      case 3:{
              //para azul bajo
              enciedeLedRGB(0,0,255);
              break;}
      case 4:{
              //para verde bajo
              enciedeLedRGB(0,255,0);
              break;}
      case 5:{
              //para rosa bajo
              enciedeLedRGB(255,0,255);
              break;}
      case 6:{
              //para cian bajo
              enciedeLedRGB(0,255,255);
              break;}
      default:{
              //para negro
              enciedeLedRGB(0,0,0);
              break;}
    }
    
  }

void loop() {
  //Himno de la alegria 
  
  color(1);
  tone(pinE, si4, blanca); delay(blanca);
  color(2);
  tone(pinE, do5, negra);delay(negra);
  color(3);
  tone(pinE, re5, negra); delay(negra);
  tone(pinE, re5, negra);delay(negra);
  color(2);
  tone(pinE, do5, negra);delay(negra);
  color(1);
  tone(pinE, si4, negra); delay(negra);
  color(5);
  tone(pinE, la4, negra);delay(negra);
  color(6);
  tone(pinE, sol4, negra); delay(negra);
  tone(pinE, sol4, negra); delay(negra);
  color(5);
  tone(pinE, la4, negra); delay(negra);
  color(1);
  tone(pinE, si4, negra); delay(negra);
  tone(pinE, si4, negra); delay(negra);
  color(5);
  tone(pinE, la4, negra); delay(negra);
  tone(pinE, la4, blanca); delay(blanca);

  color(1);
  tone(pinE, si4, blanca); delay(blanca);
  color(2);
  tone(pinE, do5, negra); delay(negra);
  color(3);
  tone(pinE, re5, negra); delay(negra);
  tone(pinE, re5, negra); delay(negra);
  color(2);
  tone(pinE, do5, negra); delay(negra);
  color(1);
  tone(pinE, si4, negra); delay(negra);
  color(5);
  tone(pinE, la4, negra); delay(negra);
  color(6);
  tone(pinE, sol4, negra); delay(negra);
  tone(pinE, sol4, negra); delay(negra);
  color(5);
  tone(pinE, la4, negra); delay(negra);
  color(1);
  tone(pinE, si4, negra); delay(negra);
  color(5);
  tone(pinE, la4, negra); delay(negra);
  color(6);
  tone(pinE, sol4, negra); delay(negra);
  tone(pinE, sol4, blanca); delay(blanca);

  color(5);
  tone(pinE, la4, negra); delay(negra);
  tone(pinE, la4, negra); delay(negra);
  color(1);
  tone(pinE, si4, negra); delay(negra);
  color(6);
  tone(pinE, sol4, negra); delay(negra);
  color(5);
  tone(pinE, la4, negra); delay(negra);
  color(1);
  tone(pinE, si4, corchea); delay(corchea);
  color(2);
  tone(pinE, do5, corchea); delay(corchea);
  color(1);
  tone(pinE, si4, negra); delay(negra);
  color(6);
  tone(pinE, sol4, negra); delay(negra);
  color(5);
  tone(pinE, la4, negra); delay(negra);
  color(1);
  tone(pinE, si4, corchea); delay(corchea);
  color(2);
  tone(pinE, do5, corchea); delay(corchea);
  color(1);
  tone(pinE, si4, negra); delay(negra);
  color(5);
  tone(pinE, la4, negra); delay(negra);
  color(6);
  tone(pinE, sol4, negra); delay(negra);
  color(5);
  tone(pinE, la4, negra); delay(negra);
  color(4);
  tone(pinE, re4, blanca); delay(blanca);

  color(1);
  tone(pinE, si4, negra); delay(negra);
  tone(pinE, si4, negra); delay(negra);
  color(2);
  tone(pinE, do5, negra); delay(negra);
  color(3);
  tone(pinE, re5, negra); delay(negra);
  tone(pinE, re5, negra); delay(negra);
  color(2);
  tone(pinE, do5, negra); delay(negra);
  color(1);
  tone(pinE, si4, negra); delay(negra);
  color(5);
  tone(pinE, la4, negra); delay(negra);
  color(6);
  tone(pinE, sol4, negra); delay(negra);
  tone(pinE, sol4, negra); delay(negra);
  color(5);
  tone(pinE, la4, negra); delay(negra);
  color(1);
  tone(pinE, si4, negra); delay(negra);
  color(5);
  tone(pinE, la4, negra); delay(negra);
  color(6);
  tone(pinE, sol4, corchea); delay(corchea);
  tone(pinE, sol4, blanca); delay(blanca);

  color(0);  
  delay(5000);

}
