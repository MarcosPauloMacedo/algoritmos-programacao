#include <stdio.h>
#include <string.h>
#include <locale.h>

/*
Programa que ajude o DETRAN a saber o total de recursos que foram
arrecadados com a aplicação de multas de trânsito.

O algoritmo deve ler as seguintes informações para cada motorista:

. número de carteira de motorista (de 1 a 4327);
. número de multas;
. valor de cada uma das multas.

Deve ser impresso o valor da dívida para cada motorista e ao final da
leitura o total de recursos arrecadados (somatório de todas as multas).
O programa deverá imprimir também o número  da carteira do motorista
que obteve o maior número de multas

OBS: O programa encerra ao ler a carteira de motorista de valor 0.
*/
int numeromultas,valormulta,maiorquantidade;
int maiormultacarteira;
int arrecadacaototal = 0,totalmulta = 0, numeroabilitacao = 1;

int main(){

  while(numeroabilitacao !=0 ){
    printf("digite o numero da carteira da abilitacao: ");
    scanf("%i", &numeroabilitacao);

    if(numeroabilitacao == 0){
      break;
    }

    printf("Qual o numero de multas? ");
    scanf("%i", &numeromultas);

    printf("Digite o valor de cada multa: ");
    for(int i=0;i<numeromultas;i++){
      scanf("%i", &valormulta);

      totalmulta = totalmulta + valormulta;

      if(numeromultas > maiorquantidade){
        maiorquantidade = numeromultas;
        maiormultacarteira = numeroabilitacao;
      }

      arrecadacaototal = arrecadacaototal + totalmulta;
    }

  printf("O valor total de multas da carteira %i e de %i R$ \n\n",
  numeroabilitacao,totalmulta);

  totalmulta = 0;
  }

printf("A carteira de numero %i teve o maior numero de multas\n\n",
maiormultacarteira);

printf("Ao todo o DETRAN arrecadou %i R$ em multas\n\n",arrecadacaototal);
}
