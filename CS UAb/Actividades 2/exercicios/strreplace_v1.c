#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void replaceString(char *base, const char *search, const char *replace) {
    char *temp;
    int searchLen = strlen(search);
    int replaceLen = strlen(replace);
    int len = strlen(base);

    for (int i = 0; i < len; i++) {
        if (i == 0 || !isalnum(base[i - 1])) {
            if (strncmp(base + i, search, searchLen) == 0) {
                if (i + searchLen == len || !isalnum(base[i + searchLen])) {
                    temp = strdup(base + i + searchLen);
                    base[i] = '\0';
                    strcat(base, replace);
                    strcat(base, temp);
                    free(temp);
                    len = strlen(base);
                }
            }
        }
    }
}

int main() {
    char base[1000];
    char search[100];
    char replace[100];

    //printf("Texto a transformar: ");
    fgets(base, sizeof(base), stdin);
    base[strcspn(base, "\n")] = '\0';  // Remove a nova linha no final.

    //printf("Procurar: ");
    fgets(search, sizeof(search), stdin);
    search[strcspn(search, "\n")] = '\0';

    //printf("Substituir por: ");
    fgets(replace, sizeof(replace), stdin);
    replace[strcspn(replace, "\n")] = '\0';

    replaceString(base, search, replace);

    //printf("Resultado:\n%s\n", base);

    return 0;
}
