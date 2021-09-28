#include <stdio.h>

// Objetivo: Faça uma função para encontrar a soma dos dígitos de um número usando recursão.Faça um programa principal que leia um número, acione a função e exiba o resultado gerado;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 27/09/2021;
// Última atualização: 27/09/2021.

int somaDigitos(int numero) {

  // teste 0

  if(numero == 0)
    return 0;

  // Soma dos dígitos
          
  return ((numero % 10) + somaDigitos(numero / 10));
}

int main() {

  int numero, soma;
    
  // Impressão das instruções

  printf("Digite um número: ");
  scanf("%d", &numero);

  // Cálculo da soma dos dígitos
    
  soma = somaDigitos(numero);

  // Impressão do resultado
    
  printf("A soma do(s) dígito(s) do número %d é %d", numero, soma);
 
  return 0;
}

