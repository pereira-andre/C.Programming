//Print a rectangle triangle with numbers n

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int n,i,j;
    printf("Please insert the number for the pattern: \n");
    scanf("%d",&n);
    
    if (n ==0)
        printf("Try again!");
    else
        for (i=1; i <= n; i++)
	{
		for (j=1; j<= i; j++)
		        printf("%d",j);
		        printf("\n");
		
	}
    return 0;
}
