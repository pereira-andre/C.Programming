#include <stdio.h>
#include <math.h>

int main() {
    int N;
    int divisor = 2; // Começamos com o menor divisor possível.

    printf("Funcao que verifica se um numero N e' primo:\n");
    printf("Indique N:");
    scanf("%d", &N);

    while (divisor * divisor <= N) {
        if (N % divisor == 0) {
            printf("%d\n", divisor); // O menor divisor encontrado.
            return 0;
        }
        divisor++;
    }

    // Se o ciclo terminar sem encontrar um divisor menor que a raiz quadrada de N, então N é primo.
    printf("0\n");

    return 0;
}
