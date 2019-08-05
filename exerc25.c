#include <stdio.h>
 
int main()
{
   int m, n, c, d;
   char matrix[10][10], transpose[10][10];

   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   
   printf("Enter elements of the matrix\n");
    //a
   for (c = 0; c < m; c++){
      for(d = 0; d < n; d++){
         scanf("%s", &matrix[c][d]);
      }
   }

      for (c = 0; c < m; c++){
      for(d = 0; d < n; d++){
         printf("%d%s", matrix[c][d]);
      }
   }
 
 
   return 0;
}