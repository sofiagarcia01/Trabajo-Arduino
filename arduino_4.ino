void setup()//sirve para definir lo que vas a hacer en el programa
{
  pinMode(6, INPUT);//sirve para definir el pin 6 como entrada
  pinMode(7, INPUT);//sirve para definir el pin 7 como entrada
  pinMode(4, OUTPUT);//sirve para definir el pin 4 como salida
  pinMode(8, OUTPUT);//sirve para definir el pin 8 como salida
}

void loop()//sirve para almacenar el codigo
{
  if (digitalRead(6) == HIGH) {
    if (digitalRead(7) == HIGH) {
      digitalWrite(4, HIGH);
      /* if es una candicional
       * digitalread sirve para leer un pin en estado alto o bajo
       * digitalwrite escribe la condicion logica (alto) en pin 4 que es salida
       */
      tone(8, 523, 1000); /* genera una onda cuadrada de una frecuencia específica en el pin especificado.
    *La duración del tono puede ser especificado
    */
      /* genera una onda cuadrada de una frecuencia específica en el pin especificado.
    *La duración del tono puede ser especificado
    */
    } else {//si no cumple la condicion if entonces se utiliza else
      digitalWrite(4, LOW);//sirve para escribe la condicion logica (bajo) en pin 4 que es salida
      noTone(8);//deja de generar la onda de sonido en el pin 8
    }
  } else {//si no cumple la condicion if entonces se utiliza else
    digitalWrite(4, LOW);//sirve para escribe la condicion logica (bajo) en pin 4 que es salida
    noTone(8);//deja de generar la onda de sonido en el pin 8
  }
  delay(10); //para todo el funcionamente por 10 milisegundos
}
