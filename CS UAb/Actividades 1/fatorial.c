#include <stdio.h>

int main() {
    int k, a = 1;
    
    scanf("%d", &k);
    
    while (k > 0) {
        a *= k;
        k--;
    }

    printf("%d", a);

    return 0;
}
