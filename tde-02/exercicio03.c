#include <stdio.h>
#include <locale.h>

int main(void){
  setlocale(LC_ALL,"Portuguese");

  int idades[3] = {18,26,32};

  printf("A idade da primeira pessoa e de %i \n",idades[0]);
  printf("A idade da segunda pessoa e de %i \n",idades[1]);
  printf("A idade da terceira pessoa e de %i \n",idades[2]);
}
