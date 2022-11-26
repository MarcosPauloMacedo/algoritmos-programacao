#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Programa que leia 15 números e guarde-os em um vetor.
//No final, mostre o vetor inteiro na tela e em seguida
//mostre em que posições foram digitados valores que são
//múltiplos de 10.

int numeros[16];

void recebernumeros(){
  printf("Digite 15 numeros inteiros: \n");
  for(int i = 0;i<15;i++){
    scanf("%i", &numeros[i]);
  }
}

void mostrarvetor(){
  for(int i = 0;i<15;i++){
    printf("%i ",numeros[i]);
  }
}

void multiplod10(){
  for(int i = 0;i<15;i++){
    int multiplo10 = numeros[i] % 10 == 0;

    if(multiplo10){
      printf("\nposicao %i e um numero multiplo de 10 \n",i+1);
    }
  }
}

int main(){
  recebernumeros();
  mostrarvetor();
  multiplod10();
}
