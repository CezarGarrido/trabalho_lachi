/*
Programa: exerc18.c
Descrição: 18. Faça um programa que leia do usuário dois valores inteiros A e B, e depois, os valores armazenados nessas variáveis devem ser trocados entre si (A passa a ter o valor armazenado em B, e B passa a ter o valor armazenado em A). Observação: a troca deve ser feita sem o uso de qualquer outra variável temporária além de A e B, e por meio do uso de operadores lógicos (NOT, OR ou AND).

Programador: Cezar Garrido Britez e Felipe de Melo Batalha
RGM: 40101, 40093
Data da última modificação: 06/08/2019

Execução: gcc -o exerc18.exe exerc18.c -pedantic -Wextra -Wall

*/


#include <stdio.h>
 
int main (int argc, char *argv[])
{
   int a, b;
   
   argc =argc;
   argv = argv;
   
   printf("Digite dois numeros inteiros (a e b) para a troca\n");
   scanf("%d%d", &a, &b);
   
   a = a + b; 
   b = a - b;
   a = a - b;
 
   printf("a = %d\nb = %d\n",a,b);
   return 0;
}