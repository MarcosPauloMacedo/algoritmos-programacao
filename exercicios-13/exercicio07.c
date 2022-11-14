#include <stdio.h>
#include <string.h>
#include <locale.h>

//Programa que permite entrar com o nome, a nota da prova 1 e da
//prova 2 de 15 alunos. Ao final, imprimir uma listagem contendo:
//nome,nota da prova 1, nota da prova 2, e média das notas de cada
//aluno. Ao final, imprimir a média geral da turma.

struct dados{
  char nome[20];
  float nota1;
  float nota2;
  float media;
};

struct dados alunos[15]; //MUDE AQUI E DIMINUI OU AUMENTA O TAMANHO DO ARRAY
int vetor = sizeof(alunos) / 20;

void lerdados(){
  for(int i=0;i<vetor;i++){
    printf("qual nome do aluno %i: ",i+1);
    setbuf(stdin,NULL);
    fgets(alunos[i].nome,20,stdin);

    printf("Quais suas notas na prova 1 e prova 2? \n");
    scanf("%f %f", &alunos[i].nota1, &alunos[i].nota2);

     float medianotas = (alunos[i].nota1 + alunos[i].nota2) / 2;
     alunos[i].media = medianotas;
  }
}

void mostrarnotas(){
  for(int i=0;i<vetor;i++){

    printf("Sao as notas do(a) aluno(a) %s **prova 1 -> %.2f, **prova 2 -> %.2f \n",
    alunos[i].nome,alunos[i].nota1,alunos[i].nota2);
    printf("  e sua media e de: %.2f pontos \n\n",alunos[i].media);
  }
}

void mediatotal(){
  float notastotal;
  int totalalunos = 0;
  for(int i=0;i<vetor;i++){
    notastotal = (notastotal + alunos[i].media);
    totalalunos++;
  }
  float mediatotal = notastotal / totalalunos;
  printf("A media total da turma foi de %.2f pontos",mediatotal);
}

int main(){
 lerdados();
 mostrarnotas();
 mediatotal();
}
