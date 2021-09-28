#include <stdio.h>

// Objetivo: Faça uma função recursiva que calcula o valor de S da série a seguir para n > 0: S = 1/1! + 1/2!  + 1/3! + ...+1 /N! double serie(int n) Faça um programa principal que leia um número, acione a função e exiba o resultado gerado;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 27/09/2021;
// Última atualização: 27/09/2021.

// Declaração da função fatorial

int fatorial(int n);


// Função S

double serie(int n) {
  
  double resultado;

  if (n > 0) {
    resultado = (double) 1/fatorial(n);
    return resultado + serie(n-1);
  }
  else {
    return resultado;
  }

}

int fatorial(int n) {
  
  if (n > 0) {
    return n * fatorial(n-1);
  }
  else {
    return 1;
  }

}

int main() {
  
  int n;
  double S;

  // Instruções

  while (n <= 0) {
    printf("Digite um número positivo: ");
    scanf("%d", &n);
  }

  S = serie(n);
  
  // Resultado

  printf("O resultado é: %.10lf", S);


  return 0;
}
