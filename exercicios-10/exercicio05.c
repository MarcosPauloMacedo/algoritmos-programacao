#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//programa que leia dois números
// reais e os imprima

int main(){
  double numero1;
  double numero2;

  printf("Digite um numero decimal:\n ");
  scanf("%lf", &numero1);

  printf("Ok, agora digite outro numero: \n");
  scanf("%lf", &numero2);

  printf("%.2lf %.2lf",numero1,numero2);
}
