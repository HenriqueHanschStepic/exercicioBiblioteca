#include <stdio.h>
#include "biblioteca.h"


int main()
{
  int num, num2, cube, fato, maiore, some;
  printf("Entre um numero: ");
  scanf("%d", &num);
  printf("Entre um numero: ");
  scanf("%d", &num2);
  
  cube = cubo(num);
  printf("\nCubo 1     | %d=%d", num, cube);
  cube = cubo(num2);
  printf("\nCubo 2     | %d=%d", num2, cube);
  
  printf("\n");
  
  fato = fatorial(num);
  printf("\nFatorial 1 | %d=%d", num, fato);
  fato = fatorial(num2);
  printf("\nFatorial 2 | %d=%d", num2, fato);
  
  printf("\n");
  
  maiore = maior(num, num2);
  printf("\nMaior      | %d e %d = %d", num, num2, maiore);
  
  printf("\n");
  
  some = somar(num, num2);
  printf("\nSoma       | %d + %d = %d", num, num2, some);
  
  return 0;
}

