void setup()//sirve para definir lo que vas a hacer en el programa
{
  pinMode(4, INPUT); //sirve para definir el pin 4 como entrada 
  pinMode(2, OUTPUT);//sirve para definir el pin 2 como salida
  pinMode(1, OUTPUT);
}

void loop()//sirve para almacenar el codigo
{
  if (digitalRead(4) == HIGH) {
    /*if es una condicional
     * digitalread sirve para leer un pin en estado alto o bajo
     */
    digitalWrite(2, HIGH);//escribe la condicion logica (alto) en pin 2 que es salida
    digitalWrite(1, LOW);//escribe la condicion logica (bajo) en pin 1 que es salida
  } else {//si no cumple la condicion if entonces se utiliza else
    digitalWrite(2, LOW);//escribe la condicion logica (bajo) en pin 2 que es salida
    digitalWrite(1, HIGH);//escribe la condicion logica (alto) en pin 1 que es salida
  }
  delay(10); //para todo el funcionamente por 10 milisegundos
}
