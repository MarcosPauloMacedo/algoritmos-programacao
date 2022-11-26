#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//crie um programa que preencha automaticamente (usando lógica,
// não apenas atribuindo diretamente) um vetor numérico de
//15 posições, com os primeiros elementos da sequência de Fibonnaci:
// 1 1 2 3 5 8 13 21 ...

void fibonnaci(int n[],int tamanhoarray){
  int numero = 1;

  for(int i=0;i<tamanhoarray;i++){
    if(i<2){
      n[i] = 1;
    }
    else{
      n[i] = n[i-1] + n[i-2];
    }

    printf("%i ",n[i]);
  }
}

int main(){
  int numeros[15];

  int tamanhoarray = sizeof(numeros)/sizeof(int);

  fibonnaci(numeros,tamanhoarray);

}
