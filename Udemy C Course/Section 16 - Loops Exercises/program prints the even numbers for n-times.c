//program prints the even numbers for n-times

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int n,i;
    printf("Please insert a number: \n");
    scanf("%d",&n);
    
    if (n==0)
        printf("0\n");
    
        for(i = 1; i<=n;i++)
    {
        printf("%d\n",i*2);
    }
    
	/* a different way :
	while (n>0)
	{
		printf("%d",i);
		i+=2; // i=i+2;
		n=n-1 //if not it would go to infinity cause n always = 7, like this it starts counting
	}
	*/
	
    return 0;
}
