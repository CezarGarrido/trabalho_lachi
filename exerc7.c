#include <stdio.h>
#include <string.h>
void main()
{
    char A[1000]="Abra a porta para entrar para poder descansar calmamente";
    char velhastr[100]="para";
    char novastr[100]="e tente";
    char resultado[1000] = "";
    char *tmp;
    int len;
    char *strAuxiliar= A;
    char *res = resultado;
    while(1) 
    {
        tmp = strstr(strAuxiliar, velhastr);

        if(tmp == NULL)
            break;

        len = tmp - strAuxiliar;  

        tmp = tmp + strlen(velhastr);  

        strncpy(res, strAuxiliar, len); // cópias até n caracteres da cadeia de caracteres apontada, por src para dest
        strcat(res, novastr); 

        res += len + strlen(novastr);
        strAuxiliar = strAuxiliar + len + strlen(velhastr); 
    }

    if(!tmp){
        strcat(resultado, strAuxiliar);
    }

    printf("%s", resultado);
}