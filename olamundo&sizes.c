#include <stdio.h>

int main(){

    printf("Olá Mundo!");

    printf("\nsizeof(char): %d", (int)sizeof(char));
    printf("\nsizeof(short): %d", (int)sizeof(short));
    printf("\nsizeof(int): %d", (int)sizeof(int));
    printf("\nsizeof(long): %d", (int)sizeof(long));
    printf("\nsizeof(long long): %d", (int)sizeof(long long));
    printf("\nsizeof(float): %d", (int)sizeof(float));
    printf("\nsizeof(double): %d", (int)sizeof(double));
    printf("\nsizeof(long double): %d", (int)sizeof(long double));

    return 0;
}