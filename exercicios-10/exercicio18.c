#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//programa que calcule a quantidade de litros de combustíveis
//consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//12 km por litro de combustível.

float distancia(float t,float v){
  float resultado = t * v;
  return resultado;
}

float consumo(float distancia){
  float resultado = distancia /12;
  return resultado;
}

int main(){
  float tempo,velocidade;

  printf("Qual o tempo decorrido de viagem? \n");
  scanf("%f", &tempo);

  printf("Qual a velocidade media do veiculo? \n");
  scanf("%f", &velocidade);

  float d = distancia(tempo,velocidade);
  float c = consumo(d);

  printf("%.1f",c);
}
