#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>
#include <time.h>

/*
Uma pousada estipulou o preço para a diária em 30 R$ e mais uma taxa
de serviços diários de :

.15 R$, se o número de dias for menor que 10,
.9 R$, se o número de dias for maior ou igual a 10.

Programa que imprima o nome, a conta e o número da conta de cada
cliente e ao final o total faturado pela pousada.

O programa deverá ler novos clientes até que o usuário digite 0
como número da conta.
*/


int numeroconta = 1, totaldiaria,faturamento = 0;

struct checkout{
  char nome[30];
  int numeroconta;
  int diaria;
};

void criarclientes(int identificador){
  struct checkout cliente;
  cliente.numeroconta = identificador;

  printf("Qual seu nome? ");
  setbuf(stdin,NULL);
  fgets(cliente.nome,30,stdin);

  printf("Quantos dias ficou na pousada ");
  scanf("%i", &cliente.diaria);

  totaldiaria = cliente.diaria;

  printf("\nNome do cliente: %s",cliente.nome);
  printf("Numero da conta: %i\n",cliente.numeroconta);
}

void calculardiaria(int diaria){
  int total;

  if(diaria < 10){
    total = diaria * 45;
    faturamento = faturamento + total;
    printf("Valor da diaria: %i R$\n\n",total);
  }
  else{
    total = diaria * 38;
    faturamento = faturamento + total;
    printf("valor da diaria: %i R$\n\n",total);
  }
}

void faturamentopousada(){
  printf("\nfaturamento total da pousada: %i R$\n",faturamento);
}

int main(){
    printf("Qual o numero da conta? ");
    scanf("%i", &numeroconta);

    do{
      criarclientes(numeroconta);
      calculardiaria(totaldiaria);

      printf("Qual o numero da conta? ");
      scanf("%i", &numeroconta);
    }while(numeroconta > 0);

    faturamentopousada();
}
