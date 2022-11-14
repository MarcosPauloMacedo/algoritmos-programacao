#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>
#include <time.h>

//programa que leia vários números e informe quantos números entre
//100 e 200 foram digitados.Quando o valor zero for lido, o algoritmo
//deverá cessar sua execução.

int main(){
  srand(time(0));

  int numero;
  int contador = 0;

  while(numero != 0){
    numero = rand() % 200;
    if(numero > 100){
      contador++;
    }
    printf("%i ",numero);
    Sleep(50);
  }

  printf("\n\nForam digitados %i numeros entre 100 e 200",contador);
}
