#include <stdio.h>

int main() {
    int n, r;
    printf("Calculo dos arranjos de N, R a R:");
    printf("\nIndique N:");
    scanf("%d", &n);
    printf("\nIndique R:");
    scanf("%d", &r);

    int i = n - r + 1;
    int contagem = 1; // 0! = 1

    if (n < r || r <= 0) {
        printf("\nErro: N tem de ser maior que R e este maior que 0.\n");
    } else {
        while (i <= n) {
            contagem = i * contagem;
            printf("  i=%d; arranjos=%d\n", i, contagem);
            i++;
        }
        printf("Resultado: %d\n", contagem);
    }

    return 0;
}