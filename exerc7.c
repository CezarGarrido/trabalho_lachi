/*
Programa: exerc7.c
Descrição: 7. Faça um programa que receba como entrada três strings (A, B e C) e retorne uma quarta string formada pela substituição de todas as ocorrências da string B pela string C dentro da string A. Ex.: Se A='Abra a porta para entrar para poder descansar calmamente', B='para' e C='e tente', a resposta deve ser: 'Abra a porta e tente entrar e tente descansar calmamente'. 
Obs.: número de caracteres de A, B e C podem variar entre 10 e 80 caracteres.

Programador: Cezar Garrido Britez e Felipe de Melo Batalha
RGM: 40101, 40093
Data da última modificação: 06/08/2019

Execução: gcc -o exerc7.exe exerc7.c -pedantic -Wextra -Wall

*/

#include <stdio.h> /* printf(), scanf()*/
#include <string.h> /*strcat() */
int main (int argc, char *argv[])
{
    char A[1000]="Abra a porta para entrar para poder descansar calmamente";
    char velhastr[100]="para";
    char novastr[100]="e tente";
    char resultado[1000] = "";
    char *tmp;
    int len;
    char *strAuxiliar= A;
    char *res = resultado;

    argc = argc;
	argv = argv;

    while(1) 
    {
        tmp = strstr(strAuxiliar, velhastr);

        if(tmp == NULL)
            break;

        len = tmp - strAuxiliar;  

        tmp = tmp + strlen(velhastr);  

        strncpy(res, strAuxiliar, len); // cópias até n caracteres da cadeia de caracteres apontada, por src para destino
        strcat(res, novastr); 

        res += len + strlen(novastr);
        strAuxiliar = strAuxiliar + len + strlen(velhastr); 
    }

    if(!tmp){
        strcat(resultado, strAuxiliar);
    }

    printf("Resultado: %s", resultado);
    return(0);
}