#include <stdio.h>
#include <math.h>

// Declaração da função randaux (sem alterações)
unsigned int randaux() {
    static long seed = 1;
    return (((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

// Função para encontrar o valor máximo em um vetor
float Maximo(float v[], int n) {
    int i;
    float resultado = v[0];  // Inicializa com o primeiro elemento do vetor
    for (i = 1; i < n; i++) {
        if (v[i] > resultado) {
            resultado = v[i];
        }
    }
    return resultado;
}

// Função para imprimir os primeiros 'count' elementos do vetor
void PrintFloats(float v[], int count) {
    int i;
    for (i = 0; i < count; i++) {
        printf("%.2f ", v[i]);
    }
}

int main() {
    int i, n;
    scanf("%d", &n);

    while (n < 10 || n > 1000) {
        printf("Numero invalido. Digite um valor entre 10 e 1000: ");
        scanf("%d", &n);
    }

    // Use um vetor com tamanho n em vez de 1000
    float v[n];

    // Preencha o vetor com valores calculados
    for (i = 0; i < n; i++) {
        v[i] = -log((float)(1 + randaux() % 10000) / 10000.0);
    }

    // Imprima os primeiros 10 elementos do vetor
    PrintFloats(v, 10);

    // Encontre e imprima o valor máximo no vetor
    printf("\n%.2f", Maximo(v, n));

    return 0;
}
