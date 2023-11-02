#include <stdio.h>

int main() {
    unsigned long long result = 1;  // Inicializa o resultado como 1
    int base = 394;
    int exponent = 4;
    int i = 0;

    while (i < exponent) {
        result *= base;  // Multiplica o resultado pela base
        i++;
    }

    printf("394^4 = %llu\n", result);

    return 0;
}
