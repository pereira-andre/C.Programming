//insert a number to check sum of numbers divisible by 3 or 5

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
   int i, n;
   int sum = 0;
   
   printf("Please insert a number to check sum of numbers divisible by 3 or 5: \n");
   scanf("%d",&n);
   
   for (i=1; i<=n; i++) {         //Counts n times!
       if (i%3==0 || i%5==0) {
           printf("%d\n",i);
           sum += i;
       }
   }
   
   /* Optimized Version - less checks by the program / runs quicker 
   
   for (i=3; i<=n ; i= i+3){ //counts every 3 times (careful w/ repeated numbers that are divisible by 5)
        sum= sum +i;
   }
 
   for (i=5; i<=n; i=i+5){
       if (i%3!=0)
       sum = sum+i;
   }
       
   */
   printf("The sum of numbers divisible by 3 or 5 up to %d is %d\n", n, sum);

   return 0;
}
