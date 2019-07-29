
#include <stdio.h>

int main()
{
    int numeros[11], i, primeiro = 0, anterior, ehTripla = 1, temp;

    for (i = 0; i < 11; i++)
    {
        printf("Digite um numero maior ou igual a 3: ");
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 11; i++) //4  2  15  15  15  3  7  7  7  7  2
    {
        primeiro = numeros[i];

        if (primeiro == anterior)
        {
            ehTripla = ehTripla + 1;
        }

        /* if(ehTripla>=3){
            temp = ehTripla;
            //3
        }*/

        anterior = primeiro;
    }
    if (ehTripla % 2 == 0)
    {
        printf("Resultado: %d", ehTripla / 2);
    }
    else
    {
        printf("Resultado: %d", ehTripla / 2);
    }
}