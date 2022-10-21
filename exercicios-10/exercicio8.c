#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//programa que leia dois números inteiros e
//imprima a subtração deles

int main(){
  int numero1;
  int numero2;

  printf("Digite um numero: \n");
  scanf("%i", &numero1);

  printf("Agora digite outro numero: \n");
  scanf("%i", & numero2);

  int subtracao(int n1,int n2){
     int resultado = n1 - n2;
     return resultado;
  }

  int resultado = subtracao(numero1,numero2);
  printf("A subtracao entre %i e %i resultou em %i",numero1,numero2,resultado);
}
