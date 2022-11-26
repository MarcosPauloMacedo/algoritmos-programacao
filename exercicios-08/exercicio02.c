#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Programa que preencha automaticamente (usando lógica, não apenas
//atribuindo diretamente) um vetor numérico com 10 posições,
//conforme: 5 10 15 20 25 30 35 40 45 50

void adicionarnumero(int n[], int tamanhoarray){
  int numero = 0;
  for(int i=0;i<tamanhoarray;i++){
    numero +=5;
    n[i] = numero;
  }
}

int main(){
  int numero[10];
  int tamanhoarray = sizeof(numero)/sizeof(int);

  adicionarnumero(numero,tamanhoarray);

  for(int i=0;i<tamanhoarray;i++){
    printf("%i ",numero[i]);
  }
}
