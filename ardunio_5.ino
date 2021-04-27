int distancia = 0;//al principio la distancia es igual a cero 

long readUltrasonicDistance(int triggerPin, int echoPin)//se usa para describir el código del sensor y mantenerlo separado del cuerpo principal del programa.
{
  pinMode(triggerPin, OUTPUT);//define como salida al pin digital que enviará el pulso ultrasónico  
  digitalWrite(triggerPin, LOW); // apagamos el trigger
  delayMicroseconds(2);//para todo el funcionamento por 2 microsegundos
}
  
  digitalWrite(triggerPin, HIGH);// genera el sonido
  delayMicroseconds(10);//para todo el funcionamento por 10 microsegundos
  digitalWrite(triggerPin, LOW);// apagamos el trigger
  pinMode(echoPin, INPUT);// Inicia el servo para que trabaje con el pin 9
  
  return pulseIn(echoPin, HIGH);/*lee el valor  si es ALTO ,espera a que el pin se ponga ALTO , comienza a cronometrar
  *luego espera a que el pin pase a BAJO y detiene el cronometraje
}

void setup()//sirve para definir lo que vas a hacer en el programa
{
  pinMode(2, OUTPUT);//sirve para definir el pin 2 como salida
  pinMode(7, OUTPUT);//sirve para definir el pin 7 como salida
}

void loop()//sirve para almacenar el codigo
{
  distancia = 0.01723 * readUltrasonicDistance(3, 3);
  if (distancia < 150) {
    /*si la distancia es menor a 150 entonces hace lo siguiente
     *  genera una onda cuadrada de una frecuencia específica en el pin especificado.
    *La duración del tono puede ser especificado
     */
    digitalWrite(2, HIGH);//escribe la condicion logica (bajo) en pin 2 que es salida
    tone(7, 523, 2000); /* genera una onda cuadrada de una frecuencia específica en el pin especificado.
    *La duración del tono puede ser especificado
    */
    digitalWrite(2, LOW);//escribe la condicion logica (bajo) en pin 2 que es salida
    noTone(7);//deja de generar la onda de sonido en el pin 7
  }
  delay(10); //para todo el funcionamente por 10 milisegundos
}
}
