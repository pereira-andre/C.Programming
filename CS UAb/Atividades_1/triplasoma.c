#include <stdio.h>

int main() {
    int N;
    int totalSomas = 0;

    printf("Escreva um numero para decompor em somas de três parcelas:\n");
    printf("Numero: ");
    scanf("%d", &N);

    int i = N / 3;
    while (i > 0) {
        int j = i;
        while (j <= (N - i) / 2) {
            int k = N - i - j;
            printf("  %d+%d+%d\n", k, j, i);  // Inverta a ordem aqui
            totalSomas++;
            j++;
        }
        i--;
    }

    printf("Numero de somas: %d\n", totalSomas);

    return 0;
}
