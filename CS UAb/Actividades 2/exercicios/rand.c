#include <stdio.h>

//gerar números pseudo-aleatórios fórmula: x(n+1)=mod(a*x(n)+b,m)
//(RAND_A*seed+RAND_B) % RAND_M

#define RAND_A 231533
#define RAND_B 82571
#define RAND_M 428573

unsigned int seed = 0;

unsigned int rand(){
    seed = (RAND_A*seed+RAND_B) % RAND_M;
    return seed;
}

int main(){
    int i,n;
    scanf("%d",&seed);
    //printf("Gerador de numeros aleatorios inteiros.\nValor maximo: ");
    scanf("%d",&n);
    n++;
    //printf("seed=%d: ", seed);
    for(i = 0; i < 10; i++){
        printf("%d ", rand() % n);
        //printf("\n");
    }

    return 0;
}