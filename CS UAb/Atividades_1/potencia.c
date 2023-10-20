#include <stdio.h>

int main() {
    int contador = 26390, k;
    scanf("%d", &k);

    if (k == 0) {
        contador = 1;
    } else {
        while (k > 1) {
            contador *= 26390;
            k--;
        }
    }
    
    printf("%d\n", contador);

    return 0;
}
