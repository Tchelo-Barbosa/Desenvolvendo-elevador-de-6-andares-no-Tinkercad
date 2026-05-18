#define ledG 13 //g
#define ledY 12 //y
#define ledO 11 //o
#define ledB 10 //b
#define ledR 9 //r
#define ledW 8 //w
 
#define botG 7 //g
#define botY 6 //y
#define botO 5 //o
#define botB 4 //b
#define botR 3 //r
#define botW 2 //w
 
 
int andar; //onde o botão foi apertado

int atual = 1; //onde o botão está apertado
 
void setup()

{

//===-LEDs-===

  pinMode(ledG, OUTPUT);

  pinMode(ledY, OUTPUT);

  pinMode(ledO, OUTPUT);

  pinMode(ledB, OUTPUT);

  pinMode(ledR, OUTPUT);

  pinMode(ledW, OUTPUT);

//===-Buttons-===

  pinMode(botG, INPUT);

  pinMode(botY, INPUT);

  pinMode(botO, INPUT);

  pinMode(botB, INPUT);

  pinMode(botR, INPUT);

  pinMode(botW, INPUT);

//

  digitalWrite(ledW,HIGH);

}

void loop()

{

  //=====-buttons verification-=====

  if (digitalRead(botG) == HIGH) {

    andar = 1;

  }

  if (digitalRead(botY) == HIGH) {

    andar = 2;

  }

  if (digitalRead(botO) == HIGH) {

    andar = 3;

  }

  if (digitalRead(botB) == HIGH) {

    andar = 4;

  }

  if (digitalRead(botR) == HIGH) {

    andar = 5;

  }

  if (digitalRead(botW) == HIGH) {

    andar = 6;

  }


//=====---LEDs behavior---=====

  switch (andar)

  {

    //Térreo

    case 1:

   if (atual == 1)

   {

     delay(500);

     digitalWrite(ledG,HIGH);

     delay(500);

     digitalWrite(ledY,LOW);

     digitalWrite(ledO,LOW);

     digitalWrite(ledB,LOW);

     digitalWrite(ledR,LOW);

     digitalWrite(ledW,LOW);

   }

    andar=0;

    atual=1;

    break;
    
    // 1° Andar
    case 2:

    if (atual == 2)

    {

      delay(500);

      digitalWrite(ledY,HIGH);

      delay(500);

      digitalWrite(ledG,LOW);

      digitalWrite(ledO,LOW);

      digitalWrite(ledB,LOW);

      digitalWrite(ledR,LOW);

      digitalWrite(ledW,LOW);

    }

    andar=0;

    atual=2;

    break;
    
    // 2° Andar
    case 3:

    if (atual==3)

    {

      delay(500);

      digitalWrite(ledO,HIGH);

      delay(500);

      digitalWrite(ledG,LOW);

      digitalWrite(ledY,LOW);

      digitalWrite(ledB,LOW);

      digitalWrite(ledR,LOW);

      digitalWrite(ledW,LOW);

    }

    andar=0;

    atual=3;

    break;
    
	// 3° Andar
    case 4:

    if (atual==4)

    {

      delay(500);

      digitalWrite(ledB,HIGH);

      delay(500);

      digitalWrite(ledG,LOW);

      digitalWrite(ledY,LOW);

      digitalWrite(ledO,LOW);

      digitalWrite(ledR,LOW);

      digitalWrite(ledW,LOW);

    }

    andar=0;

    atual=4;

    break;
    
	// 4° Andar
    case 5:

    if (atual==5)

    {

      delay(500);

      digitalWrite(ledR,HIGH);

      delay(500);

      digitalWrite(ledG,LOW);

      digitalWrite(ledY,LOW);

      digitalWrite(ledO,LOW);

      digitalWrite(ledB,LOW);

      digitalWrite(ledW,LOW);

    }

    andar=0;

    atual=5;

    break;
    
	// 5° Andar
    case 6:

    if (atual==6)

    {

      delay(500);

      digitalWrite(ledW,HIGH);

      delay(500);

      digitalWrite(ledG,LOW);

      digitalWrite(ledY,LOW);

      digitalWrite(ledO,LOW);

      digitalWrite(ledB,LOW);

      digitalWrite(ledR,LOW);

    }

    andar=0;

    atual=6;

    break;

  }

}
 




	
 