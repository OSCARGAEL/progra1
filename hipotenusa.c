#include <stdio.h>
#include <math.h>

int main () {
    
  float catetoa, catetob, hipotenusa;

  printf ("Ingrese la medida del cateto a: \n");
  scanf ("%f", &catetoa);
  printf ("Ingrese la medida del cateto b: \n");
  scanf ("%f", &catetob);

  hipotenusa = sqrt (pow (catetoa, 2) + pow (catetob, 2));

  printf ("Hipotenusa = %.2f", hipotenusa);

  return 0;
}
