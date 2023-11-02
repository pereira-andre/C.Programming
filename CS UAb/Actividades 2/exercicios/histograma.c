#include <stdio.h>
#include <stdlib.h>

#define NUM_ROWS 16
#define NUM_COLUMNS 13

unsigned int randaux() {
    static long seed = 1;
    return (((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

int rollDie() {
    return (randaux() % 6) + 1;
}

void createHistogram(int data[], int numElements) {
    int histogram[NUM_COLUMNS] = {0};

    // Contar a frequência dos resultados
    for (int i = 0; i < numElements; i++) {
        int value = data[i];
        histogram[value]++;
    }

    // Encontrar a frequência máxima
    int maxFrequency = 0;
    for (int i = 2; i <= 12; i++) {
        if (histogram[i] > maxFrequency) {
            maxFrequency = histogram[i];
        }
    }

    // Calcular os intervalos
    int intervals[NUM_ROWS];
    float n = (float) maxFrequency;
    intervals[0] = maxFrequency;
    for (int i = 1; i < NUM_ROWS; i++) {
        n = n - (n / (16 - i));
        intervals[i] = (int)(n + 0.5);  // Arredondamento para o inteiro mais próximo
    }

    // Imprimir o histograma
    printf("Simulacao de %d lancamento de dois dados:\n", numElements);
    for (int i = 0; i < NUM_ROWS; i++) {
        printf("%4d|", intervals[i]);
        for (int j = 2; j <= 12; j++) {
            if (histogram[j] >= intervals[i]) {
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("     +-----------\n");
    printf("      23456789DOD\n");
}

int main() {
    int numLancamentos;

    printf("Número de lançamentos (entre 10 e 100000): ");
    scanf("%d", &numLancamentos);

    if (numLancamentos < 10 || numLancamentos > 100000) {
        printf("Número de lançamentos fora do intervalo válido.\n");
        return 1;
    }

    int resultados[numLancamentos];

    for (int i = 0; i < numLancamentos; i++) {
        int dado1 = rollDie();
        int dado2 = rollDie();
        int soma = dado1 + dado2;
        resultados[i] = soma;
    }

    createHistogram(resultados, numLancamentos);

    return 0;
}
