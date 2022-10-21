#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//programa que calcule o reajuste do salario de um funcionario.Para isso
//o programa deverá ler o salário atual do funcionário e ler o percentual
//de reajuste. Ao final imprimir o valor do novo salário.

int main(){
  float salario,reajuste,porcentagem,novosalario;

  printf("Digite o salario do funcionario e o percentual (sem %%) de reajuste\n");
  scanf("%f %f", &salario, &reajuste);

  porcentagem = reajuste/100;
  novosalario = salario + (salario * porcentagem);

  printf("%.2f R$ e o novo salario do funcionario",novosalario);
}
