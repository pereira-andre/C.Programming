//make program that reads VALID grade 0 to 100 when input until 2

#include <stdio.h>

int main() {
    int grade;
    printf("Please insert a grade (0-100): \n");
        scanf("%d", &grade);
    if (grade>=0 && grade <=100)
    do{
        printf("VALID GRADE \n");
        printf("Please insert a grade (0-100): \n");
        scanf("%d", &grade);
    } while (grade>=0 && grade <=100);
    else 
        printf("Please try again! \n");
    return 0;
}
