#include <stdio.h>
#include <string.h>
#include <locale.h>

//Faça um programa que imprima os múltiplos de 5, no intervalo
// de 1 até 500

void multiplode5(){
  printf("1 \n");
  for(int i=0;i<=500;i+=5){
    if(i>0){
      printf("%i \n",i);
    }
  }
}

int main(){
  multiplode5();
}
