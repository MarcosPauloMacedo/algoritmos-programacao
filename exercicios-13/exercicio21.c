#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>
#include <time.h>

/*
Em uma universidade cada aluno possui os seguintes dados:

.Renda pessoal
.Renda familiar
.Total gasto com alimentação
.Total gasto com outras despesas

Programa que imprima a porcentagem de alunos que gasta acima de
200 R$ com outras despesas. O número de alunos com renda pessoal
maior que a renda familiar e a porcentagem gasto com alimentação
e outras despesas em relação às rendas pessoal e familiar.

OBS: O programa encerra quando se digita 0 para renda pessoal.
*/

float rendapessoal,rendafamiliar,alimentacao,outrasdespesas;
int validar,acima200,pessoalmaior;


void receberdados(){
  rendapessoal = 1;
  while(rendapessoal > 0){
    printf("Qual sua renda pessoal? ");
    scanf("%f", &rendapessoal);
    if(rendapessoal <=0){
      break;
    }

    printf("Qual sua renda familiar? ");
    scanf("%f", &rendafamiliar);

    printf("Qual seu gasto com alimentacao? ");
    scanf("%f", &alimentacao);

    printf("Qual seu gasto com outras despesas? ");
    scanf("%f", &outrasdespesas);

    validar = outrasdespesas > 200 ? acima200++ : 0;
    validar = rendapessoal > rendafamiliar ? pessoalmaior++ : 0;
  }
}

int main(){
  receberdados();
  printf("\n%i alunos gastam acima de 200 R$ com outras despesas: \n",
  acima200);

  printf("\n%i alunos tem renda pessoal maior que a renda familiar",
  pessoalmaior);
}
