//input a num to get the sum odds and evens & get their difference

#include <stdio.h>
#include <stdlib.h>

int main(){

	int currentdig;
	int num;
	int sumEven = 0 , sumOdd= 0;
	
	printf("Please insert a number: \n");
	scanf("%d",&num);
	
	while(num>0)
	{
		currentdig = num %10;
		if(currentdig %2 == 0)
			sumEven += currentdig;
		else
			sumOdd += currentdig;
			
		num= num /10;
	}
  
	int dif = sumEven - sumOdd;
	printf("Sum of Even numbers: %d\nSum of Odd numbers: %d\nDifference: %d", sumEven, sumOdd, dif);

 return 0;
}
