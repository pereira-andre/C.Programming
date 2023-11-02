#include <stdio.h>
#include <stdlib.h>

unsigned int randaux() {
    static long seed = 1;
    return (((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

void criarVetor(int v[], int n) {
    for (int i = 0; i < 1000; i++) {
        v[i] = randaux() % (n + 1);
    }
}

void imprimirVetor(int v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void ordenarVetor(int v[], int tamanho) {
    int aux;
    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (v[i] > v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

int main() {
    int v[1000];
    int n;

    //printf("Introduza o valor máximo (n): ");
    scanf("%d", &n);

    if (n < 0) {
        //printf("O valor máximo deve ser não negativo. Ajustando para 0.\n");
        n = 0;
    }

    criarVetor(v, n);

    //printf("Vetor criado:\n");
    imprimirVetor(v, 10);  // Imprime os primeiros 10 valores

    ordenarVetor(v, 1000);

    //printf("Vetor ordenado:\n");
    imprimirVetor(v, 10);  // Imprime os primeiros 10 valores do vetor ordenado

    return 0;
}
