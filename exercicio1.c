#include <stdio.h>
#include <stdlib.h>

int main(){

  int A, B, C, soma;

  printf("Escreva valor de A: \n");
  scanf("%d", &A);
  printf("Escreva valor de B: \n");
  scanf("%d", &B);
  printf("Escreva valor de C: \n");
  scanf("%d", &C);

  if (A + B < C)
  {
    printf("A soma de A + B e menor que C \n");

  }
  
  system("pause");
  return 0;



}