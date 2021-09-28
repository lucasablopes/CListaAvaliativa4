#include <stdio.h>

// Objetivo: Faça uma função recursiva que calcula o resto da divisão usando subtrações sucessivas:int resto(int numerador, int denominador)Faça  um  programa principal que  leia  dois  números,  acione  a  função  e  exiba  o  resultado gerado;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 27/09/2021;
// Última atualização: 27/09/2021.

int restodivisao(int numerador, int denominador) {

  int resto;

  // Cálculo do resto da divisão

  if (numerador > 0) {
    return restodivisao(numerador - denominador, denominador);
  }
  else {
    if (numerador == 0) {
      return 0;
    }
    else {
      resto = denominador + numerador;
      return resto;
    }
  }
}

int main() {

  int numerador, denominador, resto;
    
  // Impressão das instruções

  printf("Digite o numerador: ");
  scanf("%d", &numerador);
  printf("Digite o denominador: ");
  scanf("%d", &denominador);

  // Resto da divisão
    
  resto = restodivisao(numerador, denominador);

  // Impressão do resultado
    
  printf("\nO resto da divisão é %d", resto);
 
  return 0;
}
