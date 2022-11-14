#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>
#include <time.h>

//Programa que permita entrar com a idade  de várias pessoas e imprima:
//total de pessoas com menos de 21 anos
//total de pessoas com mais de 50 anos;

int main(){
  srand(time(NULL));
  int pessoas;
  int idade,idadeatual;
  int maior50 = 0,menor21;

  do{
    printf("Digite sua idade: ");
    scanf("%i", &idade);

    idadeatual = idade < 21 ? menor21++ : 0;
    idadeatual = idade > 50 ? maior50++ : 0;
    pessoas = rand() % 20;

  }while(pessoas > 1);

  printf("\nnumero de pessoas abaixo dos 21 anos e de %i pessoas \n",menor21);
  printf("E o numero de pessoas acima dos 50 anos e de %i pessoas",maior50);
}
