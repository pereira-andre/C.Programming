#include <stdio.h>

int main() {
    float montante;
    printf("Introduza um montante em euros, podendo ter centimos: ");
    scanf("%f", &montante);

    while (montante > 0.0) {
        if (montante >= 2.0) {
            int qtd = (int)(montante / 2.0);
            printf("2 euros: %d\n", qtd);
            montante -= qtd * 2.0;
        } else if (montante >= 1.0) {
            int qtd = (int)(montante / 1.0);
            printf("1 euro: %d\n", qtd);
            montante -= qtd * 1.0;
        } else if (montante >= 0.5) {
            int qtd = (int)(montante / 0.5);
            printf("50 centimos: %d\n", qtd);
            montante -= qtd * 0.5;
        } else if (montante >= 0.2) {
            int qtd = (int)(montante / 0.2);
            printf("20 centimos: %d\n", qtd);
            montante -= qtd * 0.2;
        } else if (montante >= 0.05) {
            int qtd = (int)(montante / 0.05);
            printf("5 centimos: %d\n", qtd);
            montante -= qtd * 0.05;
        } else if (montante >= 0.02) {
            int qtd = (int)(montante / 0.02);
            printf("2 centimos: %d\n", qtd);
            montante -= qtd * 0.02;
        } else if (montante >= 0.01) {
            int qtd = (int)(montante / 0.01);
            printf("1 centimo: %d\n", qtd);
            montante -= qtd * 0.01;
        }
    }

    return 0;
}
