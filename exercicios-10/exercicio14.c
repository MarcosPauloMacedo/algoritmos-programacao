#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// programa que leia a base e a altura de um retângulo
// e imprima o perímetro e a area.

int main(){
  int base,altura,perimetro;
  double area;

  printf("Digite a base do retangulo: \n");
  scanf("%i", &base);

  printf("Digite agora a altura: \n");
  scanf("%i", &altura);

  perimetro = base + altura;
  area = base * altura;

  printf("O perimtro do retangulo e de %i e a sua area e de %.2f",perimetro,area);
}
