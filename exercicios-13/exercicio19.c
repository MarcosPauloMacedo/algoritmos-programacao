#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>
#include <time.h>

/*
Em uma universidade, os alunos das turmas de informática fizeram
uma prova de algoritmos. Cada turma possui um número de alunos.

Criar um programa que imprima:

quantidade de alunos aprovados;
média de cada turma;
percentual de reprovados.

OBS: Considere aprovado com nota >=7.0
*/

float notaatual,notasturma,media;
int aprovado = 0,reprovados = 0;

int main(){
  printf("   Dados de uma escola de 300 alunos divididos em 10 turmas\n\n");

  float turmas[10][30]; //considerando uma escola com 10 turmas de 30 alunos;
  srand(time(NULL));

  for(int i=0;i<10;i++){
    for(int x=0;x<30;x++){
      turmas[i][x] = rand() % 10 + (rand() % 10 * (float)0.5);
      notaatual = turmas[i][x];

      notasturma = notasturma + notaatual;

      if(notaatual > 7){
        aprovado++;
      }
      else{
        reprovados++;
      }
    }
    media = notasturma / 30;
    printf("A media da turma %i e de %.2f pontos\n",i+1,media);
    notasturma = 0;
  }

  reprovados = reprovados * 100 / 300; //300 é o numero de alunos

  printf("\n\nA quantidade de alunos aprovados foi de %i alunos\n\n",aprovado);
  printf("A quantidade de alunos reprovados foi de %i %%\n\n",reprovados);
}
