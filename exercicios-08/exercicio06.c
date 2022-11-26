#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//programa que preencha automaticamente um vetor numérico
//com 7 números gerados aleatoriamente pelo computador
//depois mostre os valores gerados na tela.

void gerarnumero(int n[],int tamanhoarray){
  printf("Aguarde... \n");

  for(int i=0;i<tamanhoarray;i++){
    srand(time(0));
    int gerarnumero = rand() % 100;

    n[i] = gerarnumero;
      sleep(1);
  }
  for(int x=0;x<tamanhoarray;x++){
    printf("%i ",n[x]);
  }
}

int main(){
  int numeroaleatorio[7];
  int tamanhoarray = sizeof(numeroaleatorio)/sizeof(int);

  gerarnumero(numeroaleatorio,tamanhoarray);
}
