#include <stdio.h>

int main() {
    int n;
    printf("Calculo do valor da funcao Fibonacci:\n");
    printf("Indique N: ");
    
    scanf("%d", &n);
    
    int n1 = 1;
    int n2 = 2;
    int resultado;

    if (n == n1) {
        resultado = 1;
    } else if (n== n2) {
        resultado = 2;
    } else {
        int i = 3;
        while (i <= n) {
            resultado = n1+n2;
            printf("  Fib(%d)=%d\n", i, resultado);
            n1 = n2;
            n2 = resultado;
            i++;
        }
    }
    
    printf("Resultado: %d\n", resultado);

    return 0;
}

