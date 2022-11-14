#include <stdio.h>
#include <string.h>
#include <locale.h>

//Crie um programa em C que imprima os 20 primeiros termos da série
//de Fibonacci.

//OBS: os dois primeiros termos desta série são 1 e 1 e os demais são
//gerados a partir da soma dos anteriores. Exemplo:
//1 + 1 = 2, tercerio termo;
//1 + 2 = 3, quarto termo,etc.

void fibonacci(){
  int n1 = 0;
  int n2 = 1;
  int aux;

  printf("1 ");

  for(int i=1;i <20;i++){
    int res = n1 + n2;
    printf("%i ",res);
    aux = n1;
    n1 = res;
    if(aux>0){
      n2 = aux;
    }
  }
}

int main(){
fibonacci();
}
