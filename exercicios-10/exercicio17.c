#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//programa que calcule a conversão entre graus centígrados
//e fahrenheit. Para isso, leia o valor em centígrados e calcule
//com base na fórmula a seguir. Após calcular o programa deve imprimir
// o resultado da conversão.

int main(){
  int celcius;
  double fahrenheit;

  printf("Qual a temperatura celcius atual: \n");
  scanf("%i", &celcius);

  fahrenheit = (9 * celcius + 160) /5;
  printf("%.1f e a mesma temperatura em fahrenheit",fahrenheit);
}
