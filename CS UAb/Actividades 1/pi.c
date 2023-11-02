#include <stdio.h>
#include <math.h>
//Neste codigo o segredo e utilizar um conjunto de iteracoes menor
// e ir atuando logo na resoluçao em vez de armazenar valores grandes.

int main(){

    int i=0, j,n;
    double resultado, f = 0, parcela;

    scanf("%d",&n);
    
    resultado = 2.0 *sqrt(2.0) /9801.0;
    parcela = 1103 + 26390*i;
    
    while(i<=n){
        
        //resolve 4k!
        j = 4*i;
        while(j>0){
            parcela *=j;
            j--;
            //printf("%.17g\n",parcela);
        } 

        //resolve k!
        j = i;
        while(j>0){
            parcela /=(j*j*j*j);
            j--;
            //printf("%.17g\n",parcela);
        }

        //resolve (396)^(4k)
        j=4*i;
        while(j>0){
            parcela /=396;
            j--;
            //printf("%.17g\n",parcela);
        }
        i++;
        f += parcela;
        //printf("%.17g\n",parcela);
    }
    
    resultado *= f;
    
    printf("%.17g\n", 1/(resultado));
    
    return 0;
}