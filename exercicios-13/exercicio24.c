#include <stdio.h>
#include <string.h>
#include <locale.h>

/*
Programa que calcule quantos litros de gasolina são usados em uma
viagem, sabendo que um carro faz 10 km/litro. O usuário forcenerá a
velocidade do carro e o período de tempo que viaja nesta velicidade
para cada trecho do percurso.

O programa computará para todos os valores não negativos de velocidade
os litros de combustível consumidos. O programa deverá imprimir a
distância e o número de litros de combustível gastos naquele trecho.
Deverá imprimir também o total de litros gastos na viagem. O programa
encerra quando o usuário informar um valor negativo de velocidade.

*/
int velocidade = 1, percurso = 1;
float tempo, distancia,consumo,consumototal;

int main(){

  while(velocidade > 0){
    printf("Qual a velocidade por km/h do carro no percurso %i: ",percurso);
    scanf("%i", &velocidade);
    if(velocidade < 0){
      break;
    }

    printf("Quanto tempo (em minutos) ficou nesta velocidade? ");
    scanf("%f", &tempo);

    distancia = tempo / 60 * velocidade ;
    consumo = distancia / 10;

    printf("\na distancia percorrida no percurso %i foi de %.1f kilometros\n",
    percurso,distancia);
    printf("e o litro consumido foi de %.2f litros\n\n",consumo);
    consumototal = consumototal + consumo;
    percurso++;
  }

  printf("\nO total de litros gastos na viagem foi de %.2f litros", consumototal);
}
