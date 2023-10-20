//program prints a sequence of numbers till n and then backwards

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int n,i;
    printf("Please insert a number: \n");
    scanf("%d",&n);
    
    if (n==0)
        printf("0\n");
    else
    for(i = 1; i <=n;i++)
    {
        printf("\t%d",i);
    }
    printf("\n");
    for (i=n; i>=1; i--)
    {
        printf("\t%d",i);
        
    }
	
    return 0;
}
