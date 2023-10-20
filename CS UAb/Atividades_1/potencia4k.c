#include <stdio.h>

int main() {
    int contador = 394, k,i;
    scanf("%d", &k);

    if (k == 0) {
        contador = 1;
    } else {
        while(i<4){
        while (k > 1) {
            contador *= 394;
            k--;
        }
        i--;
        }
    }
    
    printf("%d\n", contador);

    return 0;
}
