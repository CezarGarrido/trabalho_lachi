
#include <ctype.h> 
#include <stdio.h> 
#include <string.h>

int main() 
{ 
   int i = 0;
   char str[100];
   printf("Digite uma frase: ");
   scanf("%[^\n]s", &str); // todos os caracteres com exceção do \n
   getchar();
   char *resultado;
   for (i; str[i] != '\0'; i++) { 
      if(str[i] == ' '){
         resultado = resultado + putchar(str[i]);
      } 
      else 
      {
      if(str[i] >= 'a' && str[i] <= 'z'){ //minusculo
            resultado = resultado + putchar(toupper(str[i]));
      }
      if (str[i] >= 'A' && str[i] <= 'Z'){//maiusculo
         resultado = resultado + putchar(tolower(str[i]));
       }
      }
   }
   printf("%s",resultado);
   return 0; 
} 
