#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//crie um programa que preencha automaticamente (usando lógica,
// não apenas atribuindo diretamente) um vetor numérico de
//10 posições, conforme: 5 3 5 3 5 3 ...

int main(){
  int n[10];
  int tamanhoarray = sizeof(n)/sizeof(int);

  for(int i=0;i<tamanhoarray;i++){
    if(n[i-1] == 5){
      n[i] = 3;
    }
    else{
      n[i] = 5;
    }

    printf("%i ",n[i]);
  }
}
