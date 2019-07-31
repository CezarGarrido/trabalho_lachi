
#include <stdio.h>

int main()
{
    int vetor[5] = {17, 4, 5, 4, 5};
    //0, 1, 2, 3, 4, 5
    int i = 0, m = 0, k = 0;
    int proximo = 0;
    int achou = 0;

    // for (i; i <= 5; i++)
    while (i <= 5 - 1 && achou == 0)
    {
        proximo = i + 1;


        printf("proximo: %d\n ", proximo);
        while ((proximo + m <= 5) && (achou == 0))
        {
            if (vetor[i] != vetor[proximo])
            {
                proximo = proximo + 1;
                m = m + 1;
            }
            else
            {
                printf("vetor[i] %d\n ", vetor[i]);
                printf("vetor[proximo] %d\n ", vetor[proximo]);
                achou = 1;
                while ((k <= m) && achou == 1)
                {
                    printf("vetor[i + k] %d\n ", vetor[i + k]); 
                    printf("vetor[proximo + k] %d\n ", vetor[proximo + k]);
                    if (vetor[i + k] == vetor[proximo + k])
                    {
                        k = k + 1;
                    }
                    else
                    {
                        achou = 0;
                        proximo = proximo + 1;
                        m = m + 1;
                    }
                }
            }
        }

        //proximo = i + 1;
        // m=0;
        i = i + 1;
    }

    //    printf("vetor[%d] %d\n ", i, vetor[i]);//17, 4, 5, 4, 6
    //    printf("vetor[%d] %d\n ", proximo, vetor[proximo]);
    if (achou == 1)
    {
        printf("%d", achou);
            printf("Sim, existem dois segmentos iguais consecutivos.\n");
    printf("Tome, por exemplo, i = %d e m = %d.\n", i-1, m-1);
    }
    return 0;
}
