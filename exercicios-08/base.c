//ALGORITMO  ESCRITO EM C;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

void identificarcor(int cor){
  int vermelho = cor == 1;
  int verde = cor == 2;
  int amarelo = cor == 3;

  if(vermelho){
    printf("vermelho \n");
  }
  else if(verde){
    printf("verde \n");
  }
  else if(amarelo){
    printf("amarela \n");
  }
}

int mudarcor(int cor){
  int vermelho = cor == 1;
  int verde = cor == 2;
  int amarelo = cor == 3;

  if(vermelho){
    cor = 2;
    return cor;
  }
  else if(verde){
    cor = 3;
    return cor;
  }
  else if(amarelo){
    cor = 1;
    return cor;
  }
}

int main(){
  int cor = 3;
  int repeticao = 1;
  int trocarcor = cor;

  while(repeticao){
    Sleep(500);
    trocarcor = mudarcor(trocarcor);
    identificarcor(trocarcor);
    repeticao++;
  }
}
