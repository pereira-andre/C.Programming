#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char input[255];
    //printf("Introduza uma string com números reais separados por espaços: ");
    fgets(input, sizeof(input), stdin);

    double soma = 0.0;
    char *token = strtok(input, " ");

    while (token != NULL) {
        double numero = atof(token);
        soma += numero;
        token = strtok(NULL, " ");
    }

    printf("%.15g\n", soma);
    return 0;
}
