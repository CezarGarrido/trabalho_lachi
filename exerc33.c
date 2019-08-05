


#include <stdio.h> /* printf() */
#include <stdlib.h> /* getenv(), NULL */

int main(int argc, char *argv[], char *env[])
{
    int i = 0;
    char *variavel;

	/* Silenciar os parâmetros não utilizados argc e argv */
	argc = argc;
	argv = argv;
	
    printf("VARIAVEIS DE AMBIENTE\n");
    printf("-----------------------");
    for (i = 0; env[i] != NULL; i++)
    {
         printf("%s\n", env[i]);
    }
    printf("-----------------------");

    variavel = getenv("PATH");

    printf("\n\nVALOR DA VARIAVEL PATH\n");    
    printf("%s", variavel);
    return(0);
}


/*
33. Faça um programa que verifique se o caminho para o compilador gcc já está incluído na variável de ambiente “path” (esse caminho será recebido pelo seu programa via linha de comando. Ex.: prog c:\Dev-cpp\bin) e, caso não esteja, deve ser incluído na variável de ambiente PATH. Dica: use um arquivo "batch" para que seja possível alterar a variável de ambiente PATH no contexto da janela do prompt de comando e o comanto SET.
*/