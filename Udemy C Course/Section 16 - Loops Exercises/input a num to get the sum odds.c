//input a num to get the sum odds

#include <stdio.h>
#include <stdlib.h>

int main(){

	int currentdig;
	int num;
	int sumOdd= 0;
	
	printf("Please insert a number: \n");
	scanf("%d",&num);
	
	while(num>0)
	{
		currentdig = num %10;
		if(currentdig %2 != 0)
			sumOdd += currentdig;
			num = num/10;
			
		num= num /10;
	
	}
	
	printf("Sum of Odd numbers: %d\n", sumOdd);

 return 0;
}
