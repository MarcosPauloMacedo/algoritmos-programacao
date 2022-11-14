#include <stdio.h>
#include <string.h>
#include <locale.h>

//Programa que permite entrar com o nome e o salário bruto de 10 pessoas
//Após ler os dado, imprimir o nome e o valor da alíquota do imposto
//de renda calculado conforme a tabela a seguir:

//salario menor que 1300 reais : isento
//salario maior ou igual a 1300 e menor que 2300 reais : 10% do slr bruto
//salario maior ou igual a 2300 15% do slr bruto

struct dados{
  char nome[20];
  float salario;
};

struct dados pessoas[10]; //MUDE AQUI E DIMINUI OU AUMENTA O TAMANHO DO ARRAY
int vetor = sizeof(pessoas)/24;

void nome_salario(){
  for(int i=0;i<vetor;i++){
    printf("Digite o nome e o salario da pessoa de numero %i: ",i+1);
    setbuf(stdin,NULL);
    fgets(pessoas[i].nome,20,stdin);
    scanf("%f", &pessoas[i].salario);
  }
}

void mostraraliquota(){
  float valorpagar;
  float salario;
  char nome[20];

  for(int i=0;i<vetor;i++){
    salario = pessoas[i].salario;
    sprintf(nome,pessoas[i].nome);

    if(salario <1300){
      printf("%s  **salario %.2f R$, isento de imposto de renda \n\n",
      nome,salario);
    }

    else if(salario < 2300 && salario >=1300){
      printf("%s  **salario %.2f R$, aliquota de 10%% de imposto de renda \n",
      nome,salario);

      valorpagar = salario * 0.10;
      printf("  **valor a pagar: %.2f R$\n\n",valorpagar);
    }

    else if(salario >= 2300){
      printf("%s  **salario %.2f R$, aliquota de 15%% de imposto de renda \n",
      nome,salario);

      valorpagar = salario * 0.15;
      printf("  **valor a pagar: %.2f R$\n\n",valorpagar);
    }
  }
}


int main(){
  nome_salario();
  mostraraliquota();
}
