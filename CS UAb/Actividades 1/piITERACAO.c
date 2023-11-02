#include <stdio.h>
#include <math.h>
//Neste codigo o segredo e utilizar um conjunto de iteracoes menor e ir incrementando
//as mesmas

int main() {
    int i = 0, j,n;
    double resultado, factor = 0, parcela;
    
    scanf("%d",&n);

    resultado = 2.0 * sqrt(2.) / 9801.;
    if(n==0){                   //e aqui calculamos 0! como =1
        resultado = 1.0/(resultado * 1103);
    }else{
    while (i < (n+1)) {         //So assim podemos calcular o valor para 1
        parcela = 1103 + 26390 * i;
        j = 4 * i;
        while (j > 0) {
            parcela *= j;
            j--;
        }
        j = i;
        while (j > 0) {
            parcela /= j * j * j * j;
            j--;
        }
        j = 4 * i;
        while (j > 0) {
            parcela /= 396;
            j--;
        }
        i++;
        factor += parcela;
    }
    
    resultado *= factor;
    resultado = 1 / resultado;
    }
    printf("%.17g",resultado);
}
