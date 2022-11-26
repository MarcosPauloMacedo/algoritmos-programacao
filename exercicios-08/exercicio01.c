#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//programa que preencha automaticamente um
//vetor numérico com 8 posições.

int main(){

  int numeros[8];

  int tamanhoVetor = sizeof(numeros)/sizeof(int);

  for(int i=0;i<tamanhoVetor;i++){
    printf("Digite um numero natural: ");
    scanf("%i", &numeros[i]);
  }

  for(int i=0;i<tamanhoVetor;i++){
    printf("%i",numeros[i]);
  }
}
