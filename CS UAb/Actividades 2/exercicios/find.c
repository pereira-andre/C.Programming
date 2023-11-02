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

    for (int i = 0; i < 10; i++) { // Declarado 'i' como variável local
        printf("%d ", v[i]);
    }
    
}

int posicao_2(int v[]) {
    // Procurar a posição do valor 2
    int posicao = -1; // Inicializa como -1 (valor não encontrado)
    for (int i = 0; i < 1000; i++) {
        if (v[i] == 2) {
            posicao = i;
            break; // Encerre a busca assim que encontrar o valor 2
        }
    }
    return posicao; // Retorna a posição do valor 2 ou -1 se não encontrado
}

int main() {
    /* Declaração do vetor v com 1000 elementos (de 0 a n) */
    int v[1000], n;

    scanf("%d", &n); // Entrada: maior número aleatório
    n++;

    vetor(v, n); // Passar o vetor 'v' e o valor 'n' como argumentos para a função vetor

    int resultado = posicao_2(v);

    printf("\n%d", resultado);

    return 0;
}
