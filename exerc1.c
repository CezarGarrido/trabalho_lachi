
#include <stdio.h>

int main(){
   int vetor[5] = {17, 4, 5, 4, 5};

   int i=0;
   int anterior = i;
   int proximo = 1;
   int achou = 0;

   for(i;i<=5;i++){

       if(vetor[i]== vetor[proximo]){
           achou = 1;
       }else{
           achou=0;
       }
       i++;
   }

}

