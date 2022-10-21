#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Faca um programa em c que leia o nome
// o endereco e o telefone de um cliente
// ao final, imprima esses dados

int main(){
  char nome[10];
  char endereco[10];
  int telefone;

  printf("Qual o seu nome? \n");
  scanf("%s", &nome);

  printf("ok,agora qual seu endereco? \n");
  scanf("%s", &endereco);

  printf("Certo, agora seu numero de telefone: \n");
  scanf("%i", &telefone);

  printf("Seu nome e %s\n",nome);
  printf("Voce mora em %s \n",endereco);
  printf("E seu numero de telefone e: %i",telefone);
}
