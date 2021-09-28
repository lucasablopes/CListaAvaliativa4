#include <stdio.h>

// Objetivo: Faça uma função recursiva que calcula a divisão usando subtrações sucessivas: int divisao (int numerador, int denominador) Faça  um  programa principal que  leia  dois  números,  acione  a  função  e  exiba  o  resultado gerado.;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 27/09/2021;
// Última atualização: 27/09/2021.

int divisao(int numerador, int denominador) {

  static int resultado = 0;

  // Cálculo da divisão

  if (numerador > 0) {
    resultado ++;
    return divisao(numerador - denominador, denominador);
  }
  else {
    return resultado;
  }
}

int main() {

  int numerador, denominador, resultado;
    
  // Impressão das instruções

  printf("Digite o numerador: ");
  scanf("%d", &numerador);
  printf("Digite o denominador: ");
  scanf("%d", &denominador);

  // Cálculo da divisão
    
  resultado = divisao(numerador, denominador);

  // Impressão do resultado
    
  printf("\nO resultado é %d", resultado);
 
  return 0;
}
