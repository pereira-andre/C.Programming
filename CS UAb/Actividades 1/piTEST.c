#include <stdio.h>
#include <math.h>

int main() {
    int kn;
    double soma = 0.0;

    //printf("Calcular o valor de PI com base na fórmula de Ramanujan\n");
    //printf("Por favor, insira um número de 0 a k: ");
    scanf("%d", &kn);

    int k0 = 0;

    while (k0 <= kn) {              //Ciclo principal = Somatorio
        int m = 4 * k0, fa = 1;
        int j = k0, fb = 1;

        // Calcula 4k!
        while (m > 1) {
            fa *= m;
            m -= 1;
        }

        // Calcula k!
        while (j > 1) {
            fb *= j;
            j -= 1;
        }

        // Calcula o termo da soma
        double termo = (double)(fa * (1103 + 26390 * k0)) / (double)(pow(fb, 4) * pow(396, 4 * k0));
        soma += termo;

        k0++;
    }

    // Calcula o valor de PI com precisão científica de 17 dígitos
    double pi = 1.0 / (2 * sqrt(2) / 9801 * soma);
    
    printf("%.16lf\n", pi); //Resultado

    return 0;
}
