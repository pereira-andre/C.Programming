//Factorial calculator teacher

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int num){
    
    int i;
	  int result = 1;
    if(num<0)
		return -1;
  
    for (i=1; i<=num;i++){
        result = result*i;
    }
    return result;
}


int main(){
    
  int myNum;
	printf("Please enter a number to check its factorial: \n");
	scanf("%d", &myNum);
	printf("Factorial value for %d is: %d", myNum, factorial(myNum));
	
 return 0;
}
