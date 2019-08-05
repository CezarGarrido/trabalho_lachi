


#include <stdio.h> /* printf() */
#include <stdlib.h> /* getenv(), NULL */
#include <string.h>

int main(int argc, char *argv[], char *env[])
{
    int i = 0;
    char *variavel;
    char *ret;
    char needle[20] = "c:\\Dev-cpp\\bin";
	/* Silenciar os parâmetros não utilizados argc e argv */
	argc = argc;
	argv = argv;

    variavel = getenv("PATH");
    ret = strstr(variavel, needle);
    if (ret!= NULL) {
      printf("Variavel Dev-cpp: %s\n", ret);
    }else{
        system("setx /M path '%path%;C:\\Users\\user\\Downloads\\a-pdf-te' ");
    }
    variavel = getenv("PATH");
    printf("Variaveis : %s\n", variavel);
    return(0);
}


/*
33. Faça um programa que verifique se o caminho para o compilador gcc já está incluído na variável de ambiente “path” (esse caminho será recebido pelo seu programa via linha de comando. Ex.: prog c:\Dev-cpp\bin) e, caso não esteja, deve ser incluído na variável de ambiente PATH. Dica: use um arquivo "batch" para que seja possível alterar a variável de ambiente PATH no contexto da janela do prompt de comando e o comanto SET.
*/