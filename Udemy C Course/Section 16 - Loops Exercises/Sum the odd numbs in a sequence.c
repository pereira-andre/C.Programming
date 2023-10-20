//Sum the odd numbs in a sequence

#include <stdio.h>
#include <stdlib.h>

int main(){

	int i;
	int n,o;
	int sumOdd = 0;
	
	printf("Please insert the total numbs in the sequence: \n");
	scanf("%d",&n);
	
	for (i=1; i<=n; i++){
	    printf("Please insert a number:\n");
	    scanf("%d",&o);
	    if (o%2 == 1)
	        sumOdd += o;
	}

    printf("Sum of odd numbers in a sequence: %d \n",sumOdd);

 return 0;
}
