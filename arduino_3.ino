void setup()//sirve para definir lo que vas a hacer en el programa
{
  pinMode(4, INPUT);//sirve para definir el pin 4 como entrada
  pinMode(12, OUTPUT);//sirve para definir el pin 12 como salida
  pinMode(13, OUTPUT);//sirve para definir el pin 13 como salida
}

void loop()//sirve para almacenar el codigo
{
  if (digitalRead(4) == HIGH) {
    /*if es una condicional
     * digitalread sirve para leer un pin en estado alto o bajo
     */
    tone(12, 523, 1000); 
    /* genera una onda cuadrada de una frecuencia específica en el pin especificado. 
    *La duración del tono puede ser especificado 
    */
    digitalWrite(13, HIGH);//escribe la condicion logica (alto) en pin 5 que es salida
    delay(1000); // para todo el funcionamente por 1 segundos
  } else { //si no cumple la condicion if entonces se utiliza else
    digitalWrite(13, LOW);//escribe la condicion logica (bajo) en pin 13 que es salida
    delay(1000); // para todo el funcionamente por 1 segundos
  }
}
