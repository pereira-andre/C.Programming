#include <stdio.h>
 
int main()
{
   int A,B,K, contagem;
   printf("Indique K: ");
   scanf("%d",&K);
   contagem =0;
   for(A=1; A<=K;A++){
        for(B=1;B<=K;B++){
            if(A+B<=K &&A*B<=K)
            contagem++;
        }
   }
   printf("Total: %d", contagem);
}