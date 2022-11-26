#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//programa que leia 7 nomes de pessoas e guarde-os em um vetor.
//No final, mostre uma listagem com todos os nomes informados,
//na ordem inversa daquela em que eles foram informados.

int main(){

  char nomes[7][20];

  printf("Digite 7 nomes: ");
  for(int i=0;i<=7;i++){
    scanf("%s", &nomes[i]);
  }

  for(int i=7;i>=0;i--){
    printf("%s ",nomes[i]);
  }
}
