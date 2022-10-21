#include <stdio.h>

int main(void){
  float notas[5];

  for(i=0;i<5;i++){
    printf("Informe as notas dos 5 alunos da turma c:\n ");
    scanf("%f", &notas[i]);
  }

  printf("Exibindo os valores do vetor: \n");

  for(i=0;i<5;i++){
      printf("notas[%i] = %.1f \n",i,notas[i]);
  }
}
