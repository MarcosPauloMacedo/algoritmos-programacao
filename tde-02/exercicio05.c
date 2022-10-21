#include <stdio.h>

int main(void){
  int i,aprovados=0,reprovados=0;
  float notas[5];

  for(i=0;i<5;i++){
    printf("Informe as notas dos 5 alunos da turma c:\n ");
    scanf("%f", &notas[i]);

    if(notas[i]<6){
      reprovados++;
    }

    else{
      aprovados++;
    }
  }

  printf("Exibindo os valores do vetor: \n");

  for(i=0;i<5;i++){
      printf("notas[%i] = %.1f \n",i,notas[i]);
  }

  printf("O total de alunos aprovados foi de %i \n",aprovados);
  printf("O total de alunos reprovados foi de %i \n",reprovados);
}
