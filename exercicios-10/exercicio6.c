#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//programa que leia um número inteiro
// e imprima seu antecessor e seu sucessor

int main(){
  int numero;
  printf("Digite um numero inteiro: \n");
  scanf("%i", &numero);

  void antesDepois(int n){
    int antecessor = n - 1;
    int sucessor = n + 1;
    printf("%i e o seu antecessor \n",antecessor);
    printf("%i e o seu sucessor \n",sucessor);
  }

  antesDepois(numero);
}
