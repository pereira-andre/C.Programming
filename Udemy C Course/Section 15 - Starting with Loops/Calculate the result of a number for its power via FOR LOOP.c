//Calculate the result of a number for its power via FOR LOOP

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int num, powr, num2;
    int i;
    printf("Please insert a number and it's power: \n");
    scanf("%d", &num);
    scanf("%d", &powr);
    num2 = num;
    
    if (powr==0)
        printf("RESULT: %d\n", num=1);
    else if (powr ==1)
        printf("RESULT: %d\n", num);
    else
        for (i = 2; i <= powr; i++)
	{
	    num = num*num2;
		printf("RESULT: %d\n ", num);
	}
	
    return 0;
}
