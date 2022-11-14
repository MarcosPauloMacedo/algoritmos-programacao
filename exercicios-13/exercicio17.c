#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>
#include <time.h>


//Programa que possa ler um conjunto de pedidos de compra e
//calcule o valor total da compra. Cada pedido é composto pelos
//seguintes campos:

//numero de pedido
//data do pedido(dia,mês,ano)
//quantidade

//Programa deverá processar novos pedidos até que o usuário digite
//0 como número do pedido.

int numeropedidos = 1;
int total = 0;
int valorcompras,quantidade;

struct carrinho{
  int numero;
  int valorpedido;
  int quantidade;
  time_t data;
};

int calcularpedido(int valor){
    return total = total + valor;
}

void receberpedidos(){
  int aux;

  while(numeropedidos > 0){

    printf("\nDigite o numero do pedido: ");
    scanf("%i", &numeropedidos);
    if(numeropedidos == 0){
      break;
    }

    printf("Agora digite a quantidade: ");
    scanf("%i", &quantidade);

    while(quantidade < 1){
      printf("Numero invalido! digite uma quantidade correta: ");
      scanf("%i", &quantidade);
    }

    aux = numeropedidos;

    struct carrinho numeropedidos;
    numeropedidos.numero = aux;
    numeropedidos.valorpedido = (rand() % 200) * quantidade;
    numeropedidos.quantidade = quantidade;
    numeropedidos.data = time(NULL);

    valorcompras = calcularpedido(numeropedidos.valorpedido);

    printf("\n\n**** PEDIDO REALIZADO COM SUCESSO ****\n\n");

    printf("Numero do pedido: %i \n",numeropedidos.numero);
    printf("Valor total do pedido: %i R$ \n", numeropedidos.valorpedido);
    printf(ctime(&numeropedidos.data));

    printf("\n****DIGITE 0 SE QUISER ENCERRAR O PROGRAMA!****\n");
  }

  printf("\n\n**** VALOR TOTAL DAS COMPRAS: %i R$",valorcompras);
}

int main(){
  receberpedidos();
}
