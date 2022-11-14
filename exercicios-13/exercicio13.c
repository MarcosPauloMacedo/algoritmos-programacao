#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>
#include <time.h>

/*
Empresa de fornecimento de energia elétrica faz a leitura mensal dos
medidores de consumo. Para cada consumidor, são digitados os seguintes
dados:

.número do consumidor
.quantidade de kwh consumidas durante o mês
.tipo (código) do consumidor

  1 - residencial, preço em reais por kwh = 0,3
  2 - comercial, preço em reais por kwh = 0,5
  3 - industrial, preço em reais por kwh = 0,7

Os dados devem ser lidos até que seja encontrado o consumidor número 0.
O programa deve calcular e imprimir:

O custo total para cada consumidor
O total de consumo para os três tipos de consumidor
A média de consumo dos tipos 1 e 2
*/

float custototal(int codigo,int kwh){

  float residencial = codigo == 1;
  float comercial = codigo == 2;
  float industrial = codigo == 3;

  float total;

  if(residencial){
    total = kwh * 0.3;
    return total;
  }
  if(comercial){
    total = kwh * 0.5;
    return total;
  }
  if(industrial){
    total = kwh * 0.7;
    return total;
  }
}

int todosconsumo;
int totalconsumo(int kwl){

  todosconsumo = todosconsumo + kwl;
  return todosconsumo;
}

int consumo_medio = 0;
int consumo_contador = 0;
int consumomedio(int codigo,int kwh){

  if(codigo == 2 || codigo == 3){
    consumo_contador++;
    consumo_medio = consumo_medio + kwh;

    return consumo_medio;
  }
}

int main(){
  srand(time(NULL));

  struct dados{
    int numero;
    int kwh;
    int codigo;
  };

  int identidade = 1,i = 0,contador = 1;
  int consumototal = 0,comercioindustria = 0;

  while(contador != 0){
    contador = rand() % 20;

    struct dados consumidor[i];
    consumidor[i].numero = identidade;
    consumidor[i].codigo = rand() % 3 + 1;

    if(consumidor[i].codigo == 2){
      consumidor[i].kwh = rand() % 500;

      if(consumidor[i].kwh < 200){
        consumidor[i].kwh = consumidor[i].kwh + 200;
      }
    }
    else if(consumidor[i].codigo == 3){
      consumidor[i].kwh = rand() % 1000;

      if(consumidor[i].kwh < 500){
        consumidor[i].kwh = consumidor[i].kwh + 500;
      }
    }
    else{
      consumidor[i].kwh = rand () % 200;

      if(consumidor[i].kwh < 50){
        consumidor[i].kwh = consumidor[i].kwh + 50;
      }
    }

    float consumo = custototal(consumidor[i].codigo,consumidor[i].kwh);
    printf(" O cliente %i pagara %.2f R$ em energia\n",i+1,consumo);
    consumototal = totalconsumo(consumidor[i].kwh); // total gasto de todos
    comercioindustria = consumomedio(consumidor[i].codigo,consumidor[i].kwh);
    //comercioindustria e o consumo total entre comercio e industria

    i++;
    identidade++;
  }

  float gastomedio =  comercioindustria / (float)consumo_contador;
  //gastomedio e o gasto medio entre comerico e industria

  if(gastomedio > 0){
    printf("\n O gasto medio entre comercio e industria foi de %.2f kwh",
    gastomedio);
  }
  else{
    printf("%i",gastomedio);
    printf("nao houve consumo na industria e nem no comercio");
  }

  printf("\n O consumo total foi de %i kwh ",consumototal);
}
