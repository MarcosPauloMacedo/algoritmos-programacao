#include <stdio.h>
#include <string.h>
#include <locale.h>

//Criar um algoritmo que calcule e imprima o resto da divisão de
//números inteiros lidos.

int dividendo,divisor,resto;

void receberdados(){
  printf("Digite um numero natural acima de 0: ");
  scanf("%i", &divisor);

  while(divisor < 1){
    printf("Numero invalido! Digite um numero natural acima de 0: ");
    scanf("%i", &divisor);
  }

  printf("Agora digite um numero maior que o primeiro: ");
  scanf("%i",&dividendo);

  while(dividendo < divisor){
    printf("Numero invalido! Digite um numero maior que o primeiro: ");
    scanf("%i", &dividendo);
  }
}

void restodivisao(){
  resto = dividendo;

  do{
  resto = resto - divisor;

}while(resto >= divisor);

  printf("O resto da divisao entre %i e %i e %i",dividendo,divisor,resto);
}

int main(){
  receberdados();
  restodivisao();
}
