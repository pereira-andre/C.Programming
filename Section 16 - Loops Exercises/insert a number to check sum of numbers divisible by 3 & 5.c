//insert a number to check sum of numbers divisible by 3 & 5

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
   int i, n;
   int sum = 0;
   
   printf("Please insert a number to check sum of numbers divisible by 3 & 5: \n");
   scanf("%d",&n);
   
   for (i=1; i<=n; i++) {
       if (i%3==0 && i%5==0) {
           printf("%d\n",i);
           sum += i;
       }
   }
   /* versão otimizada porque é de 15 em 15
   for (i=15; i<=n; i=i+15) {
           printf("%d\n",i);
           sum += i;
       }
   }*/
   printf("The sum of numbers divisible by 3 and 5 up to %d is %d\n", n, sum);

   return 0;
}
