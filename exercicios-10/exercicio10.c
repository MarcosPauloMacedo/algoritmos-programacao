#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//programa que leia tres numeros reais e calcule a média artimética
//destes números.Ao final, programa deve imprimir o resultado do cálculo

int main(){
  double numero1,numero2,numero3;

  printf("Digite um numero: \n");
  scanf("%lf", &numero1);

  printf("Agora digite outro numero: \n");
  scanf("%lf", &numero2);

  printf("Agora pra finalizar, digite outro numero: \n");
  scanf("%lf", &numero3);

  void calcularmedia(double n1, double n2, double n3){
    double resultado = ((double)n1 + n2 + n3)/3;
    printf("A media entre esses numeros e %.2f",resultado);
  }

  calcularmedia(numero1,numero2,numero3);
}
