#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//programa que leia o valor de um produto, o percentual do desconto desejado
// e imprima o valor do desconto e o valor do produto subtraindo o desconto.

int main(){
  double valorproduto,desconto,valordodesconto,valordescontado;

  printf("digite o valor do produto e o desconto em % que deseja: (somente numeros) ");
  scanf("%lf %lf",&valorproduto, &desconto);

  desconto = desconto/100;
  valordodesconto = valorproduto - (valorproduto * desconto);
  valordescontado = valorproduto - valordodesconto;

  printf("Seu desconto sera de R$ %.2f \n", valordodesconto);
  printf("ficando no final o produto no valor de R$ %.2f",valordescontado);
}
