#include <stdio.h>

int main () {

  float numero1, numero2;

  printf ("Ingrese el numero 1: \n");
  scanf ("%f", &numero1);
  printf ("Ingrese el numero 2: \n");
  scanf ("%f", &numero2);

  printf ("%.2f + %.2f = %.2f\n", numero1, numero2, numero1 + numero2);
  printf ("%.2f - %.2f = %.2f\n", numero1, numero2, numero1 - numero2);
  printf ("%.2f * %.2f = %.2f\n", numero1, numero2, numero1 * numero2);
  printf ("%.2f / %.2f = %.2f\n", numero1, numero2, numero1 / numero2);

  return 0;
}
