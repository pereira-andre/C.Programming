//print a triangle w/ # & space in the middle

#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int n;
    int i,j,k;
    int blanksp;
    
    
    printf("Please insert the number of rows in pyramid: \n");
    scanf("%d",&n);
    
    blanksp = n-1;
    
    for (i=1; i<=n; i++) //iterate all over other loops
        {
            for (k=blanksp; k >=1; k--) { //prints n-1 spaces @ start
            printf(" ");
            }
            
            for (j = 1; j<=i; j++){ //prints first row of "#"
                printf("#");
            }
            
            printf(".."); //prints middle space w/ fixed number of ".."
            
            for(int l = 1; l<=j-1; l++ ){ //prints last row of "#", but has to be j-n because w/ running the code j=1 -> j=2! 
                printf("#");
            }
        
        printf("\n");
        blanksp--;
        }
    
    return 0;
}
