//Program gives the average grade

#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int grade = 0, total = 0, k = 0;
    printf("Please insert your grades one by one (use -1 to stop): \n");
    scanf("%d", &grade);
    while (grade != -1 )
    {
        total = total + grade;
        k++;
        printf("Please insert your grades one by one (use -1 to stop): \n");
        scanf("%d", &grade);
    }
    printf("You entered %d grades, your average grade is: %.1f \n", k, (float) (total/k));
    return 0;
}
