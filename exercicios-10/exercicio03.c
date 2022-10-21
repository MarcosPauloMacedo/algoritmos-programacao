#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Faca um programa que imprima a média aritmética entre
// os números 5,8 e 12

int main(){
  int n1 = 5;
  int n2 = 8;
  int n3 = 12;

  void media(int n1, int n2,int n3){
    double media = ((double)n1 + n2 + n3)/3;
    printf("%.2lf",media);
  }

  media(n1,n2,n3);
}
