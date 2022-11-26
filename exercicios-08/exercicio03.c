#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//crie um programa que preencha automaticamente (usando lógica,
// não apenas atribuindo diretamente) um vetor numérico de
//10 posições, conforme: 9 8 7 6 5 4 3 2 1

void adicionarnumero(int n[],int tamanhoarray){
  int numero = 9;
  for(int i=0;i<tamanhoarray;i++){
    n[i] = numero;
    numero--;
  }
}

int main(){
 int numeros[10];
 int tamanhoarray = sizeof(numeros)/sizeof(int);

 adicionarnumero(numeros,tamanhoarray);
 for(int i=0;i<tamanhoarray;i++){
   printf("%i ",numeros[i]);
 }
}
