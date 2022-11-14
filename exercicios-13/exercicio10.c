#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>
#include <time.h>

//Campeonato de volleyball onde existe 30 países e cada país tem 12
//jogadores.

//Programa que receba os seguintes dados.
//o peso médio e a idade média de cada um dos times.
//o atleta mais pesado de cada time
//o atleta mais jovem de cada time
//o peso médio e a idade média de todos os participantes

struct dados{
  int peso;
  int idade;
};

struct dados atletas[30][12]; // AQUI DIMINUI OU AUMENTA O TAMANHO DO ARRAY
int paises = sizeof(atletas) / 96;
int jogadores = sizeof(atletas) / 240;

int peso,idade;
int todospesos = 0;
int todasidades = 0;
int contador = 0;

void criardados(){
  srand(time(0));

  for(int i=0;i<paises;i++){
    for(int x=0;x<jogadores;x++){
      peso = rand() % 100;
      idade = rand() % 40;

      if(peso < 50){
        peso = peso + 50;
      }

      if(idade < 18){
        idade = idade + 18;
      }

      atletas[i][x].peso = peso;
      atletas[i][x].idade = idade;
    }
  }
}

void pesomedio(){
  int pesototal =0, pesomedio =0, idadetotal =0, idademedia =0;

  for(int i=0;i<paises;i++){
    for(int x=0;x<jogadores;x++){
      pesototal = pesototal + atletas[i][x].peso;
      idadetotal = idadetotal + atletas[i][x].idade;
      contador++;
    }
    todospesos = todospesos + pesototal;
    todasidades = todasidades + idadetotal;
    pesomedio = pesototal / jogadores;
    idademedia = idadetotal / jogadores;

    printf("A media de pesos e idade do TIME %i e: \n",i+1);
    printf("peso medio: %i kg, idade media: %i anos \n\n",
    pesomedio,idademedia);

    pesototal = 0,pesomedio = 0, idademedia = 0, idadetotal = 0;
  }
}

void maispesado(){
  int maiorpeso = 0;
  int menoridade = 50;

  for(int i=0;i<paises;i++){
    for(int x=0;x<jogadores;x++){
      if(atletas[i][x].peso > maiorpeso){
        maiorpeso = atletas[i][x].peso;
      }

      if(atletas[i][x].idade < menoridade){
        menoridade = atletas[i][x].idade;
      }
    }
    printf("a menor idade e o maior peso do TIME %i e: \n",i+1);
    printf("menor idade: %i anos, maior peso: %i kg \n\n",menoridade,maiorpeso);

    maiorpeso = 0;
    menoridade = 50;
  }
}

void mediatotal(){
  int totalpesomedio = todospesos / contador;
  int totalidademedia = todasidades / contador;
  printf("A media de pesos de todos os atletas e de %i kg \n",totalpesomedio);
  printf("A media de idade de todos os atletas e de %i anos \n",totalidademedia);
}

int main(){

  criardados();
  printf("\n\n**********  PESO E IDADE MEDIA  ********** \n\n\n");

  pesomedio();
  printf("\n\n**********  MENOR IDADE E MAIS PESADO  ********** \n\n\n");

  maispesado();
  printf("\n\n**********  MEDIA TOTAL  ********** \n\n\n");

  mediatotal();
}
