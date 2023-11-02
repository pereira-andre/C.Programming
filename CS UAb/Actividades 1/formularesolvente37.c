#include <stdio.h>
#include <math.h>

// programa lista os coeficientes de funções inteiros, entre -4 e 4, que têm apenas raízes inteiras

int main() {
    // variáveis são reais tipo float
    float a=2, b=4, c=2, delta;

    // versão inteira para resposta à pergunta
    int ia, ib, ic, idelta, isqrt, k, count;
    //printf("Equacao do segundo grau a*x^2+b*x+c=0.\nIndique a b c: ");


    // calcular primeiramente o interior da raiz quadrada,
    // dependendo do sinal deste valor, haverá um número de raízes distintas
    delta = b * b - 4 * a * c;

    // mostra parcial
    //printf("Delta: %f\n", delta);

    //if (delta < 0)
    //    printf("A equacao nao tem raizes reais.\n");
    //else if (delta == 0)
    //    printf("A equacao tem uma raiz unica, x=%f.\n", -b / (2 * a));
    //else {
    //    float r1, r2;
    //    r1 = (-b + sqrt(delta)) / (2 * a);
    //    r2 = (-b - sqrt(delta)) / (2 * a);
    //    printf("O valor de x pode ser %f ou %f\n", r1, r2);
    //}

    // resposta à pergunta
    //printf("\nCalculo de coeficientes entre -K e K inteiros nao nulos, com raizes inteiras.");
    //printf("\nIntroduza K:");
    scanf("%d", &k);

    //printf("\nCoeficientes de -%d a %d inteiros nao nulos, com raizes inteiras:\n", k, k);
    count = 0;

    for (ia = -k; ia <= k; ia++) {
        for (ib = -k; ib <= k; ib++) {
            for (ic = -k; ic <= k; ic++) {
                if (ia == 0 || ib == 0 || ic == 0)
                    continue;

                idelta = ib * ib - 4 * ia * ic;

                if (idelta == 0 && ia != 0 && ib % (2 * ia) == 0) {
                    count++;
                    printf("%d %d %d\n", ia, ib, ic);
                } else if (idelta > 0) {
                    isqrt = sqrt(idelta);
                    if (isqrt * isqrt == idelta && ia != 0 &&
                        ((-ib + isqrt) % (2 * ia) == 0 && (-ib - isqrt) % (2 * ia) == 0)) {
                        count++;
                        printf("%d %d %d\n", ia, ib, ic);
                    }
                }
            }
        }
    }

    //printf("Total: %d\n", count);

    return 0;
}
