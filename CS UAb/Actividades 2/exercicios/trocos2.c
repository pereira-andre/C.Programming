#include <stdio.h>

int main() {
    double montante;
    int montanteCentavos, contagem = 0;

    printf("Introduza um montante em euros, podendo ter centimos: ");
    scanf("%lf", &montante);

    montanteCentavos = (int)(montante * 100); // Converte para centavos (número inteiro)

    // Defina os valores e textos para as moedas em um vetor
    int moedas[] = {200, 100, 50, 20, 10, 5, 2, 1};
    char *textos[] = {"2 euros", "1 euro", "50 centimos", "20 centimos", "10 centimos", "5 centimos", "2 centimos", "1 centimo"};

    for (int i = 0; i < sizeof(moedas) / sizeof(moedas[0]); i++) {
        while (montanteCentavos >= moedas[i]) {
            montanteCentavos -= moedas[i];
            contagem++;
        }
        if (contagem != 0) {
            printf("%s: %d\n", textos[i], contagem);
        }
        contagem = 0;
    }

    return 0;
}
