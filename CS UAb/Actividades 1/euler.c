#include <stdio.h>

int main() {
    int K;
    printf("Insira o valor de K: ");
    scanf("%d", &K);

    double e = 1.0;
    double term = 1.0;

    int i = 1;
    while (i <= K) {
        term /= i;
        e += term;
        i++;
    }

    printf("%.16g\n", e);

    return 0;
}
