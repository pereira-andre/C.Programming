#include <stdio.h>
 
int main()
{
   int soma=0, i=1;

   for(i=1; i<=4;i++){
       soma+=i*i;
   }
   printf("Soma dos primeiros 4 quadrados: %d", soma);
}