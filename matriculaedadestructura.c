#include <stdio.h>

int main (){

  int matricula, edad;
  float estatura;

  printf ("Ingrese su matricula: \n");
  scanf ("%d", &matricula);
  
  printf ("Ingrese su edad: \n");
  scanf ("%d", &edad);
  
  printf ("Ingrese su estatura: \n");
  scanf ("%f", &estatura);

  printf ("El alumno con la matricula %d, de %d, mide %.2f", matricula, edad,estatura);

  return 0;
}
