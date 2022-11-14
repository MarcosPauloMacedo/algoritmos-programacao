#include <stdio.h>
#include <string.h>
#include <locale.h>

/*
Crie um programa que leia um conjunto de informações (nome,sexo,idade,
peso,altura) dos atletas que participaram de uma olimpíadas, e informar:

  o atleta do sexo feminino mais alta,
  o atleta masculino mais pesado,
  a média de idade dos atletas.

  OBS: Deverão ser lidos dados dos atletas até que seja digitado o
  @ para atleta.
*/

char nome[30], sexo[15];
int idade, peso,masculino,feminino;
int totalidade = 0,atletas = 0,validar = 1,maiorpeso = 0;
float altura,maioraltura;

int main(){

  do{
    printf("*** INSERE AS SEGUINTES INFORMACOES: ***");

    printf("\nNome: ");
    setbuf(stdin,NULL);
    fgets(nome,30,stdin);

    validar = strcmp(nome,"@\n");

      if(validar == 0){
        break;
      }

    printf("\nsexo: ");
    setbuf(stdin,NULL);
    fgets(sexo,15,stdin);

    feminino = strcmp(sexo,"feminino\n");
    masculino = strcmp(sexo,"masculino\n");

    while(feminino !=0 && masculino !=0){
      printf("sexo invalido! digite 'masculino' ou 'feminino' ");
      setbuf(stdin,NULL);
      fgets(sexo,15,stdin);

      feminino = strcmp(sexo,"feminino\n");
      masculino = strcmp(sexo,"masculino\n");
    }

    printf("\nidade: ");
    scanf("%i", &idade);

    printf("\npeso: ");
    scanf("%i", &peso);

    printf("\naltura: ");
    scanf("%f", &altura);

      if(feminino == 0){
        if(altura > maioraltura){
          maioraltura = altura;
        }
      }

      if(masculino == 0){
        if(peso > maiorpeso){
          maiorpeso = peso;
        }
      }

      totalidade = totalidade + idade;
      atletas++;

      printf("\n*** DIGITE @ PARA FINALIZAR : ***\n\n");

  }while(validar != 0);

    printf("\na atleta feminina mais alta tem %.2f metros\n",maioraltura);
    printf("O atleta masculino mais pesado tem %i kilos \n", maiorpeso);
    printf("A media de idade entres os atletas e de %i anos\n",(totalidade/atletas));
}
