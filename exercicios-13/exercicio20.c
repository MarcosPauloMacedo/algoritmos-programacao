#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>
#include <time.h>

// simulando uma pesquisa realizada com 300 pessoas para saber
// qual o time de coração no rio de janeiro e niteroi.

int torcedores[1000];
int vetor = sizeof(torcedores) / sizeof(int);

float salario,salariomedio;

int times,moradia;
int rjoutros,niteroiflu;
int fluminense,botafogo,vasco,flamengo,outros;

void realizarpesquisa(){
  times = rand() % 5 + 1;
  salario = rand() % 10000 + (rand() % 10);

  if(salario < 1000){
    salario = salario + 1000;
  }

  moradia = rand() % 3 + 1;
}

void algunsdados(){
  int rj = moradia == 1;
  int niteroi = moradia == 2;
  int outracidade = moradia == 3;

  if(rj && times == 5){
    rjoutros++;
  }

  if(niteroi && times == 1){
    niteroiflu++;
  }
}

void torcedoresportime(){
  switch(times){
    case 1 : fluminense++;
    break;

    case 2 :
    botafogo++,
    salariomedio = (salariomedio + salario);
    break;

    case 3 : vasco++;
    break;

    case 4 : flamengo++;
    break;

    case 5 : outros++;
    break;
  }
}

void mostrardados(){
  printf("Resultado de uma pesquisa realizada com 1000 torcedores: \n\n");

  printf("numero de torcedores do: \n\n");

  printf("fluminense: %i \n",fluminense);
  printf("botafogo: %i \n",botafogo);
  printf("vasco: %i \n",vasco);
  printf("flamengo: %i \n",flamengo);
  printf("outros: %i \n",outros);

  salariomedio = salariomedio / botafogo;

  printf("\nmedia salarial dos torcedores do botafogo e de %.2f R$",
  salariomedio);

  printf("\n\nMoradores do rj que torcem pra outros clubes e de %i torcedores",
  rjoutros);

  printf("\n\nMoradores de niteroi que torcem para o fluminense e de %i torcedores\n\n",
  niteroiflu);
}

int main(){
  srand(time(NULL));

  for(int i=0;i<vetor;i++){

    realizarpesquisa();
    algunsdados();
    torcedoresportime();
  }

  mostrardados();
}
