#include <stdio.h>

// Objetivo: Faça uma funçãoem C para contar os dígitos de um determinado número usando recursão. Faça um programa principal que leia um número, acione a função e exiba o resultado gerado;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 27/09/2021;
// Última atualização: 27/09/2021.

int contarDigitos(int numero) {

  static int digitos=0;

  if(numero>0)
  {
    digitos++;
    return contarDigitos(numero/10);
  }
  else if (numero == 0)
  {
    return digitos;
  }
}

int main(void) {

  int numero;
  int digitos=0;

  printf("Digite um número: ");
  scanf("%d",&numero);

  digitos=contarDigitos(numero);

  printf("\nO número de dígitos no número %d é %d\n", numero, digitos);

  return 0;
}