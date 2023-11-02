#include <stdio.h>
#include <stdlib.h>

unsigned int randaux() {
    static long seed = 1;
    return (((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

void shuffleArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int j = i + randaux() % (size - i);
        
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}


int main() {
    int numElements;

    // Solicitar ao usuário o número de elementos
    //printf("Número de elementos (entre 10 e 1000): ");
    scanf("%d", &numElements);

    if (numElements < 10 || numElements > 1000) {
        printf("Número de elementos fora do intervalo válido.\n");
        return 1;
    }

    int array[numElements];

    // Preencha o vetor com valores de 0 a numElements - 1 (identidade)
    for (int i = 0; i < numElements; i++) {
        array[i] = i;
    }
    
    //printf("10 primeiros elementos:\n");
    //for (int i = 0; i < 10; i++) {
    //    printf("%d ", array[i]);
    //}
    //printf("\n");

    // Embaralhe o vetor
    shuffleArray(array, numElements);
    

    // Imprima os 10 primeiros elementos do vetor embaralhado
    //printf("10 primeiros elementos baralhados:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
