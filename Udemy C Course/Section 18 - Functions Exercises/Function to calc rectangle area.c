//Function to calc rectangle area

#include <stdio.h>
#include <stdlib.h>

float areaRect(float h, float l)
{
    float areaR= h*l;
    return areaR;
}


int main(){

    float a,b;
    printf("Program will print a rectangle area:\nPlease insert value height\n");
    scanf("%f", &a);
    printf("Please insert value wide:\n");
    scanf("%f", &b);
    printf("the rectangle area is: %.2f", areaRect(a,b));

 return 0;
}
