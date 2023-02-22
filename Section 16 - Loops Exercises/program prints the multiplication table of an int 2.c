//program prints the multiplication table of an int 2

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
        t=i*n;
        printf("%d * %d = %d\n",i,n,t);
    }
  
    return 0;
}
