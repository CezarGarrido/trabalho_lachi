#include <stdio.h>
 
int checaPrimo(int, int);

int main()
{
    int num, ehPrimo;
    printf("Entre com um numero: ");
    scanf("%d", &num);

    ehPrimo = primeno(num, num / 2);
    if (ehPrimo == 1)
    {
        printf("%d O numero eh primo\n", num);
    }
    else
    {
        printf("%d O numero nao eh primo\n", num);
    }
    return 0;
}
//checaPrimo: função recursiva que checa se um determinado número é primo
int checaPrimo(int num, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {  
       if (num % i == 0) 
       {
         return 0;
       }
       else
       {
         return checaPrimo(num, i - 1);
       }       
    }
}