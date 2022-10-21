#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//programa que calcule o valor de uma prestação em atraso. Para
//isso, o programa deve ler o valor da prestação vencida, a taxa
//periódica de juros e o período de atraso. Ao final, o programa
// deve imprimir o valor da prestação atrasada, o período de atraso,
//os juros que serão cobrados pelo período de atraso, o valor da
//prestação acrescido dos juros. Considere juros simples.

float calcularjuros(float taxa, float periodo){
  float resultado = (taxa * periodo)/100;
  return resultado;
}

float acrescentarjuros(float parcela,float juros){
  float resultado = parcela + (juros * parcela);
  return resultado;
}

int main(){
  float parcelavencida,taxajuros;
  int periodoatraso;

  printf("Qual o valor da prestacao vencida: \n");
  scanf("%f", &parcelavencida);

  printf("Qual a taxa periodica de juros ao mes (digite o valor sem %%)? \n");
  scanf("%f", &taxajuros);

  printf("quantos meses de atraso? \n");
  scanf("%i", &periodoatraso);

  float jurosapagar = calcularjuros(taxajuros,periodoatraso);
  float prestacaocomjuros = acrescentarjuros(parcelavencida,jurosapagar);

  printf("%.2f R$ e o valor da prestacao vencida \n",parcelavencida);
  printf("%i e o numero de meses em atraso \n",periodoatraso);
  printf("%.2f %% e o juros que sera cobrado \n",taxajuros);
  printf("o total a pagar sera de %.2f R$",prestacaocomjuros);
}
