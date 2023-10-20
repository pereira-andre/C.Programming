#include <stdio.h>
#include <math.h>

int main() {
    int k;
    double soma = 0.0;

    //printf("Calcular o valor de PI com base na fórmula de Ramanujan\n");
    //printf("Por favor, insira um número de 0 a k: ");
    scanf("%d", &k);

    int n = 0;

    while (n <= k) {
        int m = 4 * n, fa = 1;
        int j = n, fb = 1;

        // Calcula (4n)!
        while (m > 1) {
            fa *= m;
            m -= 1;
        }

        // Calcula (n!)
        while (j > 1) {
            fb *= j;
            j -= 1;
        }

        // Calcula o termo da soma
        double termo = (double)(fa * (1103 + 26390 * n)) / (double)(pow(fb, 4) * pow(396, 4 * n));
        soma += termo;

        n++;
    }

    // Calcula o valor de PI com precisão científica de 17 dígitos
    double pi = 1.0 / (2 * sqrt(2) / 9801 * soma);

    printf("%.16lf\n", pi); //Resultado

    return 0;
}
