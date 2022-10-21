#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//programa que imprima o produto dos valores 30 e 27

int main(){
  int n1 = 30;
  int n2 = 27;

  void somar(int n1, int n2){
    int resultado = n1 * n2;
    printf("%i",resultado);
  }

  somar(n1,n2);
}
