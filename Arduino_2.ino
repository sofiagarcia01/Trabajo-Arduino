void setup()//sirve para definir lo que vas a hacer en el programa
{
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  /*sirve para definir el pin 5 como salida
   * sirve para definir el pin 4 como salida
   * sirve para definir el pin 3 como salida
   * sirve para definir el pin 2 como salida
   * sirve para definir el pin 7 como salida
   * sirve para definir el pin 6 como salida
   */
  
}//HOLAA

void loop()//sirve para almacenar el codigo
{
  digitalWrite(5, HIGH);//escribe la condicion logica (alto) en pin 5 que es salida
  digitalWrite(4, HIGH);//escribe la condicion logica (alto) en pin 4 que es salida
  delay(3000); // para todo el funcionamente por 3 segundos
  digitalWrite(4, LOW);//escribe la condicion logica (bajo) en pin 4 que es salida
  digitalWrite(3, HIGH);//escribe la condicion logica (alto) en pin 3 que es salida
  delay(2000); //para todo el funcionamente por 2 segundos
  digitalWrite(3, LOW);//escribe la condicion logica (bajo) en pin 3 que es salida
  digitalWrite(2, HIGH);//escribe la condicion logica (alto) en pin 2 que es salida
  delay(3000); // para todo el funcionamente por 3 segundos
  digitalWrite(5, LOW);//escribe la condicion logica (bajo) en pin 5 que es salida
  digitalWrite(7, HIGH);escribe la condicion logica (alto) en pin 7 que es salida
  delay(3000); // para todo el funcionamente por 3 segundos
  digitalWrite(7, LOW);//escribe la condicion logica (bajo) en pin 7 que es salida
  digitalWrite(6, HIGH);//escribe la condicion logica (alto) en pin 6 que es salida
  delay(2000); // para todo el funcionamente por 2 segundos
  digitalWrite(6, LOW);//escribe la condicion logica (bajo) en pin 6 que es salida
  digitalWrite(2, LOW);//escribe la condicion logica (bajo) en pin 2 que es salida
  digitalWrite(5, HIGH);//escribe la condicion logica (alto) en pin 5 que es salida
  delay(1000); // // para todo el funcionamente por 1 segundos
  digitalWrite(5, LOW);//escribe la condicion logica (bajo) en pin 5 que es salida
}
