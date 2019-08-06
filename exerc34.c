/*
Programa: exerc34.c
Descrição: 34. Faça um programa denominado "fechar" que seja capaz de “matar” um programa atualmente na memória. Seu programa deve receber via linha de comando o nome do programa a ser fechado.
Exemplo: fechar notepad
Observação: seu programa deve conseguir fechar somente aqueles programas que você já tenha privilégio do sistema para poder fechar. 
Dicas para o programa em C: 
Use o programa tasklist para retornar o PID do programa a ser fechado.  Exemplo: tasklist –fi “imagename eq notepad.exe”
Use comando “taskkill” com a opção “/pid” para fechar o programa.  

Programador: Cezar Garrido Britez e Felipe de Melo Batalha
RGM: 40101, 40093
Data da última modificação: 06/08/2019

Execução: gcc -o exerc34.exe exerc34.c -pedantic -Wextra -Wall

*/ 


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i = 0;
    char comando[17]= "taskkill /f /im ";//Comando disponivel pelo console do windows
    if( argc >= 2 )
    {   
         strcat(comando, argv[1]);//concateno a string inicial com valor passado pelo usuario
         system(comando);
    }
    else
    {
        printf("Argumento vazio.\n");
    }
    return 0;
}