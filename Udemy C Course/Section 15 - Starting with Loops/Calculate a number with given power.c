//Calculate a number with given power

#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, power;
    int result = 1;
    printf("Please insert your base number: \n");
    scanf("%d", &num);
    printf("Please insert your number power: \n");
    scanf("%d", &power);
    while (power > 0 )
    {
        result = result*num;
        power--;
    }
    printf("RESULT: %d \n",result);
    return 0;
}
