#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000000

unsigned int randaux() {
    static long seed = 1;
    return (((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[m + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (arr[middle] == target) {
            return middle;
        }

        if (arr[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return -1; // Se o elemento não for encontrado
}

int main() {
    int tamanho, elemento;
    scanf("%d", &tamanho);
    scanf("%d", &elemento);

    int arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        arr[i] = randaux() % (tamanho + 1); // Números aleatórios entre 0 e tamanho
    }

    mergeSort(arr, 0, SIZE - 1);

    int quartil25 = arr[SIZE / 4];
    int quartil50 = arr[SIZE / 2];
    int quartil75 = arr[3 * SIZE / 4];

    //printf("%d %d %d\n", quartil25, quartil50, quartil75);

    int posicao = binarySearch(arr, SIZE, elemento);
    printf("%d\n", posicao);

    return 0;
}
