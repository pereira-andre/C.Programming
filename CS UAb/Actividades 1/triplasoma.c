#include <stdio.h>

//Para funcionar a submissao => ocultar todos os printf()

int main() {
    int n,i,j, sum= 0;

    printf("Escreva um numero para decompor em somas de tres parcelas:\nNumero: ");
    scanf("%d", &n);

    //percorre permutações:
    i= n-2;

    while((n-i) <= i*2){
        j = (n-i)-1;
        if(j>i){
            j=i;
        }
        while((n-i-j) <= j){
            printf(" %d+%d+%d\n", i, j, n-i-j);
            sum++;
            j--;
        }
        i--;
    }
    
    printf("Numero de somas: %d\n", sum);

    return 0;
}
