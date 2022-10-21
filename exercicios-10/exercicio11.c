#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//programa que leia 2 numero reais e
//calcule as quatro operações básicas
//entre estes dois números e depois imprima
// os resultados.

void soma(int n1, int n2){
  int resultado = n1 + n2;
  printf("A soma entre esses dois numeros e de: %i \n",resultado);
}

void subtracao(int n1, int n2){
  int resultado = n1 - n2;
  printf("A subtracao entre esses dois numeros e de: %i \n",resultado);
}

void multiplicacao(int n1, int n2){
  int resultado = n1 * n2;
  printf("A multiplicacao entre esses dois numeros e de: %i \n",resultado);
}

void divisao(int n1, int n2){
  int resultado = n1 / n2;
  printf("A divisao entre esses dois numeros e de: %i \n",resultado);
}

int main(){
  int n1;
  int n2;

  printf("Digite um numero: \n");
  scanf("%i", &n1);

  printf("Digite outro numero: \n");
  scanf("%i", &n2);

  void operacao(int n1, int n2){
    soma(n1,n2);
    subtracao(n1,n2);
    multiplicacao(n1,n2);
    divisao(n1,n2);
  }

  operacao(n1,n2);
}
