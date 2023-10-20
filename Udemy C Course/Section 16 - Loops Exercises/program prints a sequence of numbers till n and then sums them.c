//program prints a sequence of numbers till n and then sums them

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int n,i,t=0;
    printf("Please insert a number: \n");
    scanf("%d",&n);
    
    if (n==0)
        printf("0\n");
    else
    for(i = 1; i <=n;i++)
    {
        printf("\t%d\n",i);
        t=t+i;
    }
    printf("TOTAL:\t%d\n", t);
    
	
    return 0;
}
