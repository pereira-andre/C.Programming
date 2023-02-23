//0,01€/day for 30 days

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int i;
    float j=0.01;
    printf("How much you earn if you get 0,01€ per day during 30 days: \n");
    for (i=1; i <= 30; i++) //dia 1, 2, 3
	    {   
			printf("Money on day %d: %.2f€\n",i,j);
		    j=j*2;
		    
	}
	printf("TOTAL: \n %.2f€\n",j);
	
    return 0;
}
