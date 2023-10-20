//make program that reads VALID grade (0-100) when input until

#include <stdio.h>

int main() {
    int grade;
    
    do{
        printf("Please insert a grade (0-100): \n");
        scanf("%d", &grade);
        
    } while (grade>=0 && grade <=100);
    
    printf("Entered valid grades thanks ;)\n");
    
    return 0;
}
