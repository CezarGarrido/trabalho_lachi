
#include <stdio.h>

int main()
{
    int numeros[11], i, proximo = 0, cont=0, anterior, ehTripla = 1, temp=0;

    for (i = 0; i < 11; i++)
    {
        printf("Digite um numero maior ou igual a 3: ");
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 11; i++) //4  2  15  15  15  3  7  7  7  7  2
    {
        proximo  = numeros[i];

        if (proximo == anterior)
        {
            cont++; //cont=1

            if(cont==2){
                temp = 1;
            }

            if(cont>=3){
                 if(cont==3){
                    ehTripla = 1;
                 }
                 ehTripla++;
            }
            printf("proximo: %d\n", proximo);
            printf("anterior: %d\n", anterior);
            printf("count: %d\n", cont);
        }
        anterior = proximo ;
    }

    ehTripla = ehTripla + temp;

   // printf("-> ehTripla %d\n", ehTripla - 2);

    if(ehTripla % 2 == 0){
         ehTripla+=1;
         printf("-> ehTripla Par: %d\n", ehTripla - 2);
    }else{
        printf("-> ehTripla Impar: %d\n", ehTripla - 2 );
    }
    
}