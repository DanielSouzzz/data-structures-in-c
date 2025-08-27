#include <stdio.h>

int main() 

{

int numero;

printf("Digite um numero: ");

scanf("%d", &numero);  // & é necessário

printf("Valor digitado: %d\n", numero);

printf("Endereco de numero: %p\n", &numero);

}
