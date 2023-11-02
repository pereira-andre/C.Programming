#include <stdio.h>
#include <stdlib.h>

unsigned int randaux() {
    static long seed = 1;
    return (((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

void lancar_dados(int dados[], int n) {
    for (int i = 0; i < n; i++) {
        dados[i] = (randaux() % 6) + 1;
    }
}

const char* avaliar_resultado(int dados[], int n) {
    int contagem[7] = {0};
    for (int i = 0; i < n; i++) {
        contagem[dados[i]]++;
    }
    
    int pares = 0, trios = 0;
    for (int i = 1; i <= 6; i++) {
        if (contagem[i] == 2) pares++;
        if (contagem[i] == 3) trios++;
        if (contagem[i] == 4) return "poker quadruplo";
        if (contagem[i] == 5) return "poker real";
    }
    
    if (pares == 1 && trios == 1) return "fullen";
    if (pares == 2) return "duplo par";
    if (pares == 1) return "par";
    if (trios == 1) return "trio";
    
    if ((contagem[1] && contagem[2] && contagem[3] && contagem[4] && contagem[5]) ||
        (contagem[2] && contagem[3] && contagem[4] && contagem[5] && contagem[6])) {
        return "sequência";
    }
    
    return "nada";
}

int main() {
    int n_lancamentos_falsos;
    scanf("%d", &n_lancamentos_falsos);
    
    for (int i = 0; i < n_lancamentos_falsos; i++) {
        randaux();
    }
    
    int dados[5];
    lancar_dados(dados, 5);
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", dados[i]);
    }
    
    printf("(%s)\n", avaliar_resultado(dados, 5));
    
    return 0;
}
