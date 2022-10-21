#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//programa que leia numero real e imprima
//1/4 deste número.

int main(){
  double n;

  printf("Digite um numero qualquer: \n");
  scanf("%lf", &n);

  double fracao(double numero){
    double resultado = (double)numero / 4;
    printf("%.2lf",resultado);
  }

  fracao(n);
}
