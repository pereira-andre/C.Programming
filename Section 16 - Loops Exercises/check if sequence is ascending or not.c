//check if sequence is ascending or not

#include <stdio.h>
#include <stdlib.h>

int main(){

	int seq;
	int currentVal = 0;
	int prevVal = 0;
	int ascendvalflag = 1;
	
	printf("Program will check if a sequence of numbers is ascending or not\n");
	
	while(seq<=0){
	printf("Please insert how many numbers:\n");
	scanf("%d", &seq);
	}
	
	if(seq<=0);
		printf("Please try again!\n");
		
		do{
      
		printf("Please insert a number for the sequence:\n");
		scanf("%d", &currentVal);
		
		if (currentVal<0)
			printf("Please insert a different number!\n");
			else{
		if (currentVal <= prevVal)
    {
			ascendvalflag = 0;
      break;
    }
			prevVal = currentVal;
			seq--;
		}
		
		}while(seq>0);

		if(ascendvalflag ==1)
			printf("The sequence is ASCENDING! \n");
		else
			printf("The sequence is NOT ASCENDING! \n");

 return 0;
}
