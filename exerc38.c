
#include <stdio.h>
 
int main(){

    int a=0, b=0, soma=0;

    printf("Entre com um numero A: ");
    scanf("%d", &a);

    printf("Entre com um numero B: ");
    scanf("%d", &b);

    soma = SomaRecursiva(a+1, b, soma);

    printf("Ah soma eh: %d", soma);

    return 0;
}

int SomaRecursiva(int a, int b, int soma) 
{
    if(a==b){
        return soma;
    }
    
    if(a%2==0){
        soma += a;
    }

    return SomaRecursiva(a+1, b , soma);
}