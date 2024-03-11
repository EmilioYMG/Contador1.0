//definir variables
#define pinIzq 25
#define pinDer 32
//encoder
#define encoderA 12
#define encoderB 13

//Variables de programa
int encoderAprev;
int encoderAcurr;
int contador=0;

void setup() {
Serial.begin(9600) //comunicación
delay(500)
pinMode(encoderA, INPUT);
pinMode(encoderB, INPUT);
//leer estado inicial 
encoderAprev= digitalRead(encoderA);
}

void loop() {
  encoderAcurr= digitalRead(encoderA);
  if(encoderAcurr!=encoderAprev && encoderAcurr==HIGH)
  {
    if(digitalRead(encoderB)==HIGH)
    {
      contador--;
    }
    else
    {
      contador++;
    }
    Serial.print(contador);
  }

}
