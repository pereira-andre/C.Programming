#include <stdio.h>

int main() {
    float n;
    printf("Introduza um valor n: ");
    scanf("%f", &n);

    for (int i = 1; i < 16; i++) {
        n = n - (n / (16 - i));
        printf("%.f\n", n);
    }

    return 0;
}
