#include <stdio.h>
#include <string.h>
#include <locale.h>

//Crie um programa que receba a idade e a opnião de 20 espectadores,
//calcule e imprima:

//A média das idades das pessoas que responderam excelente;
//A quantidade de pessoas que responderam regular;
//A porcentagem de pessoas que responderam bom entre todos os expectadores
//analisados

int excelente,bom,regular;

struct opniao{
  int idade;
  char opniao[15];
};

struct opniao espec[20]; //MUDE AQUI E DIMINUI OU AUMENTA O TAMANHO DO ARRAY
int vetor = sizeof(espec) /16;

void receberdados(){
  char opniao[15];
  int excelente,bom,regular;

  for(int i=0;i<vetor;i++){
    printf("Qual sua idade e sua opniao: [excelente,bom,regular]\n");
    scanf("%i", &espec[i].idade);
    setbuf(stdin,NULL);
    fgets(espec[i].opniao,15,stdin);

    sprintf(opniao,espec[i].opniao);

    excelente = strcmp(opniao,"excelente\n");
    bom = strcmp(opniao,"bom\n");
    regular = strcmp(opniao,"regular\n");

    while(excelente != 0 && bom !=0 && regular != 0){
      printf("opniao invalida! digite: 'excelente' ou 'bom' ou 'regular'!\n");
      setbuf(stdin,NULL);
      fgets(espec[i].opniao,15,stdin);

      sprintf(opniao,espec[i].opniao);

      excelente = strcmp(opniao,"excelente\n");
      bom = strcmp(opniao,"bom\n");
      regular = strcmp(opniao,"regular\n");
    }
  }
}

void analisardados(){
  float mediaidade,porcentagem;
  int idades = 0,totalexcelente = 0, totalbom = 0;
  int totalpessoas = 0,totalregular = 0;
  char opniao[15];


  for(int i=0;i<vetor;i++){
    sprintf(opniao,espec[i].opniao);
    totalpessoas++;

    excelente = strcmp(opniao,"excelente\n");
    bom = strcmp(opniao,"bom\n");
    regular = strcmp(opniao,"regular\n");

    if(excelente == 0){
      totalexcelente++;
      idades = idades + espec[i].idade;
      mediaidade = idades / (float)totalexcelente;
    }
    if(bom == 0){
      totalbom++;
      porcentagem = totalbom * 100 / (float)totalpessoas;
    }
    if(regular == 0){
      totalregular++;
    }
  }

  printf("As pessoas que responderam excelente tem idade media de %.2f \n\n",
  mediaidade);
  printf("A quantidade de pessoas que responderam regular foi de %i pessoas\n\n",
  totalregular);
  printf("A quantidade de pessoas que responderam bom foi de %.2f %%\n",
  porcentagem);
}

int main(){
  receberdados();
  analisardados();
}
