

#include <stdio.h>
#include <math.h> //necessária para usar as funções matemáticas

int main(){
    int numero = 0;
    printf("Digite o numero para calcular o log2(X): ");
    scanf("%d", &numero);

    printf("%2.f", log2(numero));

}