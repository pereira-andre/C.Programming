#include <stdio.h>

unsigned int randaux()
{
  static long seed=1;
  return(((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

int vetor(int v[], int n) {
    /* Inicializar o vetor, com valores aleatórios de 0 a n */
    for (int i = 0; i < 1000; i++) {
        /* Acesso à posição i do vetor v: v[i] */
        v[i] = randaux() % n;
    }
    
}

void print(int v[], int n){
    for (int i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }
}

int sort(int v[], int n){

    int aux;
    for(int i =0; i<n;i++){
        for(int j = i+1;j<n;j++){
            if(v[i]>v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
}

int main() {
    /* Declaração do vetor v com 1000 elementos (de 0 a n) */
    int v[1000], n;

    scanf("%d", &n); // Entrada: maior número aleatório
    n++;

    vetor(v, n); // Passar o vetor 'v' e o valor 'n' como argumentos para a função vetor

    print(v, 10);   //Vetor desordenado

    sort(v,n);

    printf("\n");
    print(v, 10);   //vetor ordenado

    return 0;
}
