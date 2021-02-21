

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
double redonda = 950;
double blanca = redonda / 2; // la mitad de la redonda
double negra = redonda / 4; // la cuarta parte de la redonda
double corchea = redonda / 8; // la octava parte de la redonda
double semicorchea = redonda / 16; // tambien llamada doble corchea y es la dieciseisava parte de una redonda
double fusa = redonda / 32; // tambien llamada triple corchea y es la treintaidosava parte de una redonda
double semifusa = redonda / 64; //  tambien llamada cuadruple corchea y es la sesentaicuatroava parte de una redonda

//Led RGB
int ledR = 6;
int ledG = 5;
int ledB = 3;

//Buzzer
int pinE = 9;

void setup() {
  pinMode(pinE,OUTPUT);
  Serial.begin(9600);
  pinMode(pinE, OUTPUT);
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);

}



void loop() {
  
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(2);
  tone(pinE, si4, corchea); delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(3);
  tone(pinE, fa5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  delay(negra);
  color(9);
  tone(pinE, fa4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  delay(negra);
  color(2);
  tone(pinE, si4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  delay(corchea);
  color(3);
  tone(pinE, fa4, corchea); delay(corchea);
  color(0);
  delay(negra);
  color(4);
  tone(pinE, re4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  delay(corchea);
  color(5);
  tone(pinE, sol4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(6);
  tone(pinE, la4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(6);
  tone(pinE, la4, corchea); delay(corchea);
  color(5);
  tone(pinE, sol4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  
  color(9);
  tone(pinE, fa4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(3);
  tone(pinE, fa5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(7);
  tone(pinE, sol5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(8);
  tone(pinE, mi5, corchea); delay(corchea);
  color(3);
  tone(pinE, fa5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(2);
  tone(pinE, si4, corchea); delay(corchea);
  color(10);
  tone(pinE, do5, corchea); delay(corchea);
  color(6);
  tone(pinE, la4, corchea); delay(corchea);
  color(0);
  delay(negra);
  color(2);
  tone(pinE, si4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  delay(corchea);
  color(9);
  tone(pinE, fa4, corchea); delay(corchea);
  color(0);
  delay(negra);
  color(4);
  tone(pinE, re4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  delay(corchea);
  color(5);
  tone(pinE, sol4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(6);
  tone(pinE, la4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(6);
  tone(pinE, la4, corchea); delay(corchea);
  color(6);
  tone(pinE, sol4, corchea); delay(corchea);
  color(0);
  delay(corchea);

  color(9);
  tone(pinE, fa4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(3);
  tone(pinE, fa5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(7);
  tone(pinE, sol5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(8);
  tone(pinE, mi5, corchea); delay(corchea);
  color(3);
  tone(pinE, fa5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(11);
  tone(pinE, si4, corchea); delay(corchea);
  color(10);
  tone(pinE, do5, corchea); delay(corchea);
  color(6);
  tone(pinE, la4, corchea); delay(corchea);
  color(0);
  delay(negra);
  delay(negra);
  color(3);
  tone(pinE, fa5, corchea); delay(corchea);
  color(8);
  tone(pinE, mi5, corchea); delay(corchea);
  tone(pinE, mi5, corchea); delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(5);
  tone(pinE, sol4, corchea); delay(corchea);
  tone(pinE, sol4, corchea); delay(corchea);
  color(11);
  tone(pinE, si4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(4);
  tone(pinE, sol4, corchea); delay(corchea);
  color(11);
  tone(pinE, si4, corchea); delay(corchea);
  color(10);
  tone(pinE, do5, corchea); delay(corchea);

  color(0);
  delay(negra);
  color(3);
  tone(pinE, fa5, corchea); delay(corchea);
  color(8);
  tone(pinE, mi5, corchea); delay(corchea);
  tone(pinE, mi5, corchea); delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(7);
  tone(pinE, sol5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(7);
  tone(pinE, sol5, corchea); delay(corchea);
  tone(pinE, sol5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  delay(negra);
  delay(negra);
  color(3);
  tone(pinE, fa5, corchea); delay(corchea);
  color(8);
  tone(pinE, mi5, corchea); delay(corchea);
  tone(pinE, mi5, corchea); delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(5);
  tone(pinE, sol4, corchea); delay(corchea);
  tone(pinE, sol4, corchea); delay(corchea);
  color(11);
  tone(pinE, si4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(5);
  tone(pinE, sol4, corchea); delay(corchea);
  color(11);
  tone(pinE, si4, corchea); delay(corchea);
  color(10);
  tone(pinE, do5, corchea); delay(corchea);

  color(0);
  delay(negra);
  color(3);
  tone(pinE, fa5, corchea); delay(corchea);
  color(8);
  tone(pinE, mi5, corchea); delay(corchea);
  tone(pinE, mi5, corchea); delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(7);
  tone(pinE, sol5, corchea); delay(corchea);
  tone(pinE, sol5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  delay(negra);
  delay(negra);
  color(3);
  tone(pinE, fa5, corchea); delay(corchea);
  color(8);
  tone(pinE, mi5, corchea); delay(corchea);
  tone(pinE, mi5, corchea); delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(5);
  tone(pinE, sol4, corchea); delay(corchea);
  tone(pinE, sol4, corchea); delay(corchea);
  color(11);
  tone(pinE, si4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(5);
  tone(pinE, sol4, corchea); delay(corchea);
  color(11);
  tone(pinE, si4, corchea); delay(corchea);
  color(10);
  tone(pinE, do5, corchea); delay(corchea);
  color(0);
  delay(negra);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  delay(corchea);
  color(10);
  tone(pinE, do5, corchea); delay(corchea);
  color(0);
  delay(negra);

  color(11);
  tone(pinE, si4, corchea); delay(corchea); 
  color(0);
  delay(corchea);
  delay(negra);
  delay(blanca);
  delay(negra); 
  color(3);
  tone(pinE, fa5, corchea); delay(corchea);
  color(8);
  tone(pinE, mi5, corchea); delay(corchea);
  tone(pinE, mi5, corchea); delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(5);
  tone(pinE, sol4, corchea); delay(corchea);
  tone(pinE, sol4, corchea); delay(corchea);
  color(11);
  tone(pinE, si4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(5);
  tone(pinE, sol4, corchea); delay(corchea);
  color(2);
  tone(pinE, si4, corchea); delay(corchea);
  color(10);
  tone(pinE, do5, corchea); delay(corchea);
  color(0);
  delay(negra);
  color(3);
  tone(pinE, fa5, corchea); delay(corchea);
  color(8);
  tone(pinE, mi5, corchea); delay(corchea);
  tone(pinE, mi5, corchea); delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(7);
  tone(pinE, sol5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(7);
  tone(pinE, sol5, corchea); delay(corchea);
  tone(pinE, sol5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  delay(negra);
  
  delay(negra);
  color(3);
  tone(pinE, fa5, corchea); delay(corchea);
  color(8);
  tone(pinE, mi5, corchea); delay(corchea);
  tone(pinE, mi5, corchea); delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(5);
  tone(pinE, sol4, corchea); delay(corchea);
  tone(pinE, sol4, corchea); delay(corchea);
  color(11);
  tone(pinE, si4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(5);
  tone(pinE, sol4, corchea); delay(corchea);
  color(11);
  tone(pinE, si4, corchea); delay(corchea);
  color(10);
  tone(pinE, do5, corchea); delay(corchea);
  color(0);
  delay(negra);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  delay(corchea);
  color(10);
  tone(pinE, do5, corchea); delay(corchea);
  color(0);
  delay(negra);
  color(11);
  tone(pinE, si4, corchea); delay(corchea); 
  color(0);
  delay(corchea);
  delay(negra);
  delay(blanca);
  color(11);
  tone(pinE, si4, corchea); delay(corchea); 
  tone(pinE, si4, corchea); delay(corchea); 
  color(0);
  delay(corchea);
  color(11);
  tone(pinE, si4, corchea); delay(corchea); 
  color(0);
  delay(corchea);
  color(11);
  tone(pinE, si4, corchea); delay(corchea); 
  color(10);
  tone(pinE, do5, corchea); delay(corchea); 
  color(0);
  delay(corchea);

  color(1);
  tone(pinE, re5, corchea); delay(corchea); 
  color(11);
  tone(pinE, si4, corchea); delay(corchea); 
  color(0);
  delay(corchea);
  color(5);
  tone(pinE, sol4, corchea); delay(corchea); 
  color(9);
  tone(pinE, fa4, corchea); delay(corchea); 
  color(0);
  delay(corchea);
  delay(negra);
  color(11);
  tone(pinE, si4, corchea); delay(corchea);
  tone(pinE, si4, corchea); delay(corchea); 
  color(0);
  delay(corchea);
  color(11);
  tone(pinE, si4, corchea); delay(corchea); 
  color(0);
  delay(corchea);
  color(11);
  tone(pinE, si4, corchea); delay(corchea); 
  color(10);
  tone(pinE, do5, corchea); delay(corchea);  
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(blanca); 
  color(11);
  tone(pinE, si4, corchea); delay(corchea); 
  tone(pinE, si4, corchea); delay(corchea);
  tone(pinE, si4, corchea); delay(corchea); 
  color(0);
  delay(corchea);
  color(11);
  tone(pinE, si4, corchea); delay(corchea); 
  color(0);
  delay(corchea);
  color(11);
  tone(pinE, si4, corchea); delay(corchea); 
  color(10);
  tone(pinE, do5, corchea); delay(corchea); 
  color(0);
  delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea); 
  color(11);
  tone(pinE, si4, corchea); delay(corchea); 
  color(0);
  delay(corchea);
  color(5);
  tone(pinE, sol4, corchea); delay(corchea); 
  color(9);
  tone(pinE, fa4, corchea); delay(corchea); 
  color(0);
  delay(corchea);
  delay(negra);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  tone(pinE, re5, corchea); delay(corchea);
  color(1);
  delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(11);
  tone(pinE, si4, corchea); delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);

  color(9);
  tone(pinE, fa4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  delay(negra);
  color(11);
  tone(pinE, si4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  delay(corchea);
  color(9);
  tone(pinE, fa4, corchea); delay(corchea);
  color(0);
  delay(negra);
  color(4);
  tone(pinE, re4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  delay(corchea);
  color(5);
  tone(pinE, sol4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(6);
  tone(pinE, la4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(6);
  tone(pinE, la4, corchea); delay(corchea);
  color(5);
  tone(pinE, sol4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(9);
  tone(pinE, fa4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(3);
  tone(pinE, fa5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(7);
  tone(pinE, sol5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(8);
  tone(pinE, mi5, corchea); delay(corchea);
  color(3);
  tone(pinE, fa5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(11);
  tone(pinE, si4, corchea); delay(corchea);
  color(10);
  tone(pinE, do5, corchea); delay(corchea);
  color(6);
  tone(pinE, la4, corchea); delay(corchea);
  color(0);
  delay(negra);
  color(11);
  tone(pinE, si4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  delay(corchea);
  color(9);
  tone(pinE, fa4, corchea); delay(corchea);
  color(0);
  delay(negra);
  color(4);
  tone(pinE, re4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  delay(corchea);
  color(5);
  tone(pinE, sol4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(6);
  tone(pinE, la4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(6);
  tone(pinE, la4, corchea); delay(corchea);
  color(5);
  tone(pinE, sol4, corchea); delay(corchea);
  color(0);
  delay(corchea);

  color(9);
  tone(pinE, fa4, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(3);
  tone(pinE, fa5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(7);
  tone(pinE, sol5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(8);
  tone(pinE, mi5, corchea); delay(corchea);
  color(3);
  tone(pinE, fa5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(1);
  tone(pinE, re5, corchea); delay(corchea);
  color(0);
  delay(corchea);
  color(11);
  tone(pinE, si4, corchea); delay(corchea);
  color(10);
  tone(pinE, do5, corchea); delay(corchea);
  color(6);
  tone(pinE, la4, corchea); delay(corchea);
  color(0);
  delay(negra);
  

  delay(5000);
  

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
              //para rojo
              enciedeLedRGB(255,0,0);
              break;}
      case 3:{
              //para azul
              enciedeLedRGB(0,0,255);
              break;}
      case 4:{
              //para verde
              enciedeLedRGB(0,255,0);
              break;}
      case 5:{
              //para rosa
              enciedeLedRGB(255,0,255);
              break;}
      case 6:{
              //para cian
              enciedeLedRGB(0,255,255);
              break;}
      case 7:{
              //para amarillo
              enciedeLedRGB(255,255,0);
              break;}
      case 8:{
              //para naraja
              enciedeLedRGB(255,127,0);
              break;}
      case 9:{
              //para celeste
              enciedeLedRGB(0,100,255);
              break;}
      case 10:{
              //para morado
              enciedeLedRGB(128,0,255);
              break;}
      case 11:{
              //para verde claro
              enciedeLedRGB(0,255,64);
              break;}
      default:{
              //para negro
              enciedeLedRGB(0,0,0);
              break;}
    }
    
  }
