#include <stdio.h>

int main()
{
    int n, i, soma;

    printf("Calculo da soma dos primeiros N numeros.\nIndique N:");
    /* ler um número inteiro */
    scanf("%d", & n);
    /* na variável soma, será acumulado o resultado */
    soma = 0;
    i = 1;

    while(i<=n){
        soma+=i;
        printf("  adicionar %d, parcial %d\n", i,soma);
        i++;
    }


    /* mostrar resultado final */
    printf("\nTotal: %d\n", soma);
}
