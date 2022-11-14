#include <stdio.h>
#include <string.h>
#include <locale.h>

//país A com 5 milhões de habitantes e uma taxa de natalidade de 3% ao
//e um país B com 7 milhões de habitantes e uma taxa de natalidade de
//2% ao ano.

//Calcule e imprima o tempo necessário para que a população do país
// A ultrapasse a população do país B.

int main(){
  float a,b,natalidade_a,natalidade_b;
  int contador = 0;

  a = 5;
  b = 7;

  natalidade_a = 0.03;
  natalidade_b = 0.02;

  while(a<b){
    a = a + a * natalidade_a;
    b = b + b * natalidade_b;

    contador++;
  }

  printf("vai precisar de %i anos para o pais A ser mais populoso que o B",
  contador);
}
