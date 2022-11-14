#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>
#include <time.h>

//programa que leia vários números inteiros e apresente o fatorial de
//cada número. O algoritmo encerra quando se digita um número menor
//do que 1

int main(){
  int fatorial = 2;
  int numero,fatorar;

  printf("Digite um numero: ");
  scanf("%i", &fatorial);

  do{
    numero = fatorial;
    fatorar = numero -1;

    for(int i= fatorar;i>0;i--){
      fatorial = fatorial * i;
    }

    printf("O fatorial de %i e : %i \n",numero,fatorial);
    printf("digite um numero: ");
    scanf("%i",&fatorial);
  }while(fatorial>1);
}
