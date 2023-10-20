#include <stdio.h>

//versão correta

int main() {
    double montante;
    int montanteCentavos, contagem = 0;

    printf("Introduza um montante em euros, podendo ter centimos: ");
    scanf("%lf", &montante);

    montanteCentavos = (int)(montante * 100); // Converte para centavos (número inteiro)

    // Subtrai 2€
    while (montanteCentavos >= 200) {
        montanteCentavos -= 200;
        contagem++;
    }
    if (contagem != 0) {
        printf("2 euros: %d\n", contagem);
    }
    contagem = 0;

    // Subtrai 1€
    while (montanteCentavos >= 100) {
        montanteCentavos -= 100;
        contagem++;
    }
    if (contagem != 0) {
        printf("1 euro: %d\n", contagem);
    }
    contagem = 0;

    // Subtrai 50 centavos
    while (montanteCentavos >= 50) {
        montanteCentavos -= 50;
        contagem++;
    }
    if (contagem != 0) {
        printf("50 centimos: %d\n", contagem);
    }
    contagem = 0;

    // Subtrai 20 centavos
    while (montanteCentavos >= 20) {
        montanteCentavos -= 20;
        contagem++;
    }
    if (contagem != 0) {
        printf("20 centimos: %d\n", contagem);
    }
    contagem = 0;

    // Subtrai 10 centavos
    while (montanteCentavos >= 10) {
        montanteCentavos -= 10;
        contagem++;
    }
    if (contagem != 0) {
        printf("10 centimos: %d\n", contagem);
    }
    contagem = 0;

    // Subtrai 5 centavos
    while (montanteCentavos >= 5) {
        montanteCentavos -= 5;
        contagem++;
    }
    if (contagem != 0) {
        printf("5 centimos: %d\n", contagem);
    }
    contagem = 0;

    // Subtrai 2 centavos
    while (montanteCentavos >= 2) {
        montanteCentavos -= 2;
        contagem++;
    }
    if (contagem != 0) {
        printf("2 centimos: %d\n", contagem);
    }
    contagem = 0;

    // Subtrai 1 centimo
    while (montanteCentavos > 0) {
        montanteCentavos--;
        contagem++;
    }
    if (contagem != 0) {
        printf("1 centimo: %d\n", contagem);
    }

    return 0;
}
