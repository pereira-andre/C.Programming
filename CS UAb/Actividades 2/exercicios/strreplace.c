#include <stdio.h>
#include <string.h>

void strreplace(char *base, const char *A, const char *B) {
    char temp[1000]; // Buffer temporário
    char *ptr = base;
    char *start = base;

    while ((ptr = strstr(start, A)) != NULL) {
        strncpy(temp, start, ptr - start); // Copia o texto antes de A
        temp[ptr - start] = '\0';

        strcat(temp, B); // Adiciona B
        strcat(temp, ptr + strlen(A)); // Adiciona o texto após A

        strcpy(start, temp); // Copia o texto modificado de volta para base

        start = ptr + strlen(B); // Move o ponteiro de início para evitar substituição recursiva
    }
}

int main() {
    char base[1000];
    char A[100];
    char B[100];

    printf("Insira a string base: ");
    fgets(base, sizeof(base), stdin);
    strtok(base, "\n"); // Remove a nova linha

    printf("Insira a string A: ");
    fgets(A, sizeof(A), stdin);
    strtok(A, "\n"); // Remove a nova linha

    printf("Insira a string B: ");
    fgets(B, sizeof(B), stdin);
    strtok(B, "\n"); // Remove a nova linha

    strreplace(base, A, B);

    printf("String base após substituição: %s\n", base);

    return 0;
}
