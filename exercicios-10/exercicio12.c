#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//programa que leia um numero que leia um numero real e calcule o quadrado
//deste número. Ao final, o programa deve imprimir o resultado do cálculo.
double n1;

double quadrado(){
  return n1 * n1;
}
int main(){

  printf("Digite um numero: \n");
  scanf("%lf", &n1);

  double resultado = quadrado();
  printf("%.1f",resultado);
}
