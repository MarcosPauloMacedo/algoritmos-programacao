#include <stdio.h>
#include <string.h>
#include <locale.h>

//Programa em c que permite entrar com nome, idade e o sexo de 20
//pessoas. O programa deve imprimir o nome da pessoa se ela for do
//sexo masculino e tiver mais de 21 anos.

int main(){

  int listanome = 20; //MUDE AQUI E DIMINUI OU AUMENTA O TAMANHO DO ARRAY
  int idade,maior21 = 0, masculino,feminino;
  char nome[30],nomes[listanome][30],sexo[15];

  printf("digite seu nome: ");
  setbuf(stdin,NULL);
  fgets(nome,30,stdin);

  for(int i=0;i<listanome;i++){

    printf("Agora digite sua idade: ");
    scanf("%i", &idade);

    printf("Agora seu sexo: 'masculino' ou 'feminino': ");
    scanf("%s", &sexo);

    masculino = strcmp(sexo,"masculino");
    feminino = strcmp(sexo,"feminino");

    while(masculino !=0 && feminino != 0){
      printf("sexo invalido! digite 'feminino' ou 'masculino' ");
      scanf("%s", &sexo);

      masculino = strcmp(sexo,"masculino");
      feminino = strcmp(sexo,"feminino");
    }

    if(masculino == 0 && idade >21){
      sprintf(nomes[i],nome);
      maior21++;
    }

    if(listanome - i == 1){
      break;
    }

    printf("\ndigite seu nome: ");
    setbuf(stdin,NULL);
    fgets(nome,30,stdin);
  }

  printf("\nAs pessoas maiores de 21 anos do sexo masculino sao: \n");

  for(int i=0;i<maior21;i++){
    printf("%s",nomes[i]);
  }
}
