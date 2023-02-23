//Program will print required '*'

#include<stdio.h>
int main()
{
    int count = 0,n;
    printf("Please insert the required '*' to be printed: \n");
    scanf("%d", &n);
    while (count <n)
    {
        printf("*");
        count+=1;
    }
    
    return 0;
}
