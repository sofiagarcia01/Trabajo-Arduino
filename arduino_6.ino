void setup()//sirve para definir lo que vas a hacer en el programa
{
  pinMode(A1, INPUT);//sirve para definir el pin analogico A1 como entrada
  pinMode(12, OUTPUT);//sirve para definir el pin 12 como salida
  pinMode(13, OUTPUT);//sirve para definir el pin 13 como salida
  Serial.begin(9600);
  /*le indica al Arduino que inicie comunicación con la computadora 
   * con una velocidad de comunicación serial de 9600 bits por segundo
    */
}

void loop()//sirve para almacenar el codigo
 temperatura = -40 + 0.488155 * (analogRead(A1) - 20);// define la temperatura en el pasador A1 
  if (temperatura > 35) {
    /*if es una condicional
     * si la temperatura es menor a 35 grados 
     * entonces ejecuta lo siguiente
     */
    digitalWrite(12, HIGH);//escribe la condicion logica (alto) en pin 12 que es salida 
    digitalWrite(13, LOW);//escribe la condicion logica (bajo) en pin 13 que es salida
  } else { //si no cumple la condicion if entonces se utiliza else
    digitalWrite(12, LOW);//escribe la condicion logica (bajo) en pin 12 que es salida
    digitalWrite(13, HIGH);//escribe la condicion logica (alto) en pin 13 que es salida
  }
  Serial.println(temperatura);
  /*imprime en la consola la temperatura
   */
  delay(10); // para todo el funcionamente por 10 segundos
}







 
