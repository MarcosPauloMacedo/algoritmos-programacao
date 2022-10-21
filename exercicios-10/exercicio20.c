#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//programa que efetua a apresentação do valor
//da conversão em real de um valor lido em dolar.
//Para isso,será necessário também ler o valor da
//cotação em dolar.

float dolar,cotacao,real;

void realizarcotacao(){
  real = dolar * cotacao;
}

int main(){

  printf("digite um valor em dolar e sua cotacao do dia: \n");
  scanf("%f %f", &dolar, &cotacao);

  realizarcotacao();

  printf("Convertendo o valor em reais ficaria em %.2f reais",real);
}
