#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// programa que leia o saldo de uma conta poupança e imprima o novo
// saldo,considerando um reajuste de 2%

int main(){
  double salario, reajuste;

  printf("Digite o seu salario: \n");
  scanf("%lf", &salario);

  reajuste = salario + (salario * 0.02);
  printf("Seu salario com reajuste e de: R$ %.2f",reajuste);
}
