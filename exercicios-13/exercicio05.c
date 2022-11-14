#include <stdio.h>
#include <string.h>
#include <locale.h>

//sabendo-se que a unidade lógica e aritmética calcula o produto
//através de somas sucessivas, crie um programa que calcule o
//produto de dois números inteiros lidos. Suponha que os números
//lidos sejam positivos e que o multiplicando seja menor do que o
//multiplicador

int numero1;
int numero2;

void obternumeros(){

  printf("digite 2 numero positivo de forma crescente: ");
  scanf("%i %i", &numero1, &numero2);

  int negativos = numero1 <0 || numero2<0;
  int crescente = numero1 > numero2;

  while(negativos || crescente){

    printf("\nDigite numeros positivos de forma crescente!\n \n");
    printf("digite 2 numeros positivos: ");
    scanf("%i %i", &numero1, &numero2);

    negativos = numero1 <0 || numero2<0;
    crescente = numero1 > numero2;
  }
}

int calcularproduto(int n1, int n2){
  int resultado = n1 * n2;
  return resultado;
}

int main(){

  obternumeros();
  int produto = calcularproduto(numero1,numero2);
  printf("o produto dos valores e de: %i",produto);
}
