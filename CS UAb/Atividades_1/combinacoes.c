#include <stdio.h>

int main() {
    int n, r;

    printf("Calculo das combinacoes de N, R a R:\n");
    printf("Indique N:");
    scanf("%d", &n);
    printf("Indique R:");
    scanf("%d", &r);

    int resultado = 1;
    int i = 1;

    while (i <= r) {
        printf("  %d", resultado);
        resultado *= (n - r + i);
        printf("*%d=%d, %d/%d=", (n - r + i),resultado, resultado, i);
        resultado /= i ;
        printf("%d\n", resultado);
        i++;
    }

    printf("Resultado: %d\n", resultado);

    return 0;
}
