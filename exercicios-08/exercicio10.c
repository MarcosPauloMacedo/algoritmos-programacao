#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//Algoritmo que preencha um vetor de 30 posições com números entre
//1 e 15 sorteados pelo computador. Depois disso, peça para o
//usuário digitar um número (chave) e seu programa deve mostrar em
//que posições essa chave foi encontrada. Mostre também quantas
//vezes a chave foi sorteada.

int chaves[31];
int array = sizeof(chaves) / sizeof(int);
int numerogerado,quantidade;
int numero = 16;
int posicaochave[31];

void preencherchaves(){
  srand(time(0));

  for(int i = 0;i<array;i++){
    numerogerado = rand() % 16;
    chaves[i] = numerogerado;
    //printf("%i ",chaves[i]);
  }
}

void _digitarnumero(){
  printf("Digite um numero natural entre 0 e 15: ");
  scanf("%i", &numero);
  if(numero > 15){
    printf("Numero invalido! \n");
  }
}

void recebernumero(){
  while(numero>15){
    _digitarnumero();
  }
}

void encontrarchave(){
  int indice = 0;

  for(int i=0;i<array;i++){
    if(chaves[i] == numero){
      quantidade++;
      posicaochave[indice] = i;
      indice++;
    }
  }
}

void resultado(){
  int array = sizeof(posicaochave)/sizeof(int);
  int nvezes = 0;

    printf("Posicoes da chave gerada: ");

    for(int i=0;i<array;i++){
      if(posicaochave[i] != 0){
        printf("%i ",posicaochave[i]);
        nvezes++;
      }
    }
      printf("sendo sorteada %i vezes",nvezes);
}

int main(){
  preencherchaves();
  recebernumero();
  encontrarchave();
  resultado();
}
