#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Programa que leia 10 números inteiros e guarde-os em um vetor.
//No final, mostre quais são os números pares que foram digitados
// e em que posições eles estão armazenados.

int numeros[11];
int array = sizeof(numeros)/sizeof(int);
int posicaoarray[11];
int valordaposicao[11];

void recebernumeros(){
    printf("Digite 10 numeros inteiros: ");
    for(int i=0;i<array;i++){
      scanf("%i",&numeros[i]);
    }
}

void multiplod2(){
  int indice = 0;

  for(int i=0;i<array;i++){
    int formultiplo = numeros[i] % 2 == 0;

    if(formultiplo){
      posicaoarray[indice] = i+1;
      valordaposicao[indice] = numeros[i];

      indice++;
    }
  }
}

void resultado(){
  printf("Os numeros da posicao: ");

  int arrayposicao = sizeof(posicaoarray) / sizeof(int);

  for(int i=0;i<arrayposicao;i++){
    if(posicaoarray[i] != 0){
      printf("%i ",posicaoarray[i]);
    }
  }

  printf("que sao os numeros: ");

  for(int i=0;i<arrayposicao;i++){
    if(valordaposicao[i] != 0){
      printf("%i ",valordaposicao[i]);
    }
  }

  printf("sao multiplos de 2");
}

int main(){
  recebernumeros();
  multiplod2();
  resultado();
}
