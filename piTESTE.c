#include <stdio.h>
#include <math.h>

//Tentar nao usar POW()!!!!!!!!!

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

    int fc = 26390;
    if (k == 0) {
        fc = 1;
    } else {
        while (k > 1) {
            fc *= 26390;
            k--;
        }
        printf("%lld\n", (long long) fc);
    }

    int fd = 394,i;
    scanf("%d", &k);

    if (k == 0) {
        fd = 1;
    } else {
        while(i<4){
        while (k > 1) {
            fd *= 394;
            k--;
        }
        i--;
        }
        printf("%lld\n", (long long) fd);
    }


        long long termo = (long long)(fa * (1103 + 26390 * n)) / (long long)(fc * fd);
        soma += termo;

        n++;
    }

    // Calcula o valor de PI com precisão científica de 17 dígitos
    double pi = 1.0 / (2 * sqrt(2) / 9801 * (double) soma);

    printf("%.16lf\n", pi); //Resultado

    return 0;
}
