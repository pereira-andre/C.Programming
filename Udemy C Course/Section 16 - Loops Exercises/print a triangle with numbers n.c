//print a triangle w/ numbers n

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int n;
    int i,j,k;
    int blanksp;
    int currentvalue=1;
    
    printf("Please insert the number of rows in piramid: \n");
    scanf("%d",&n);
    
    blanksp = n-1;
    
    for (i=1; i<=n; i++) //iterate all over other loops
        {
            for (k=blanksp; k >=1; k--) { //will print a space every n-1 times
            printf(" ");
            }
            
            for (j = 1; j<=i; j++) 
            {
                printf("%d ",currentvalue); //starts counting
                currentvalue+=1;
            }
            
        printf("\n");
        blanksp--;
        
        }
    
    return 0;
}
