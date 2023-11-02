#include <stdio.h>

void PrintHistogram(int arr[], int n) {
    int maxEle = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxEle) {
            maxEle = arr[i];
        }
    }

    for (int i = maxEle; i >= 0; i--) {
        printf("%2d | ", i);

        for (int j = 0; j < n; j++) {
            if (arr[j] >= i) {
                printf(" x ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < n + 3; i++) {
        printf("---");
    }

    printf("\n");
    printf("    ");

    for (int i = 0; i < n; i++) {
        printf("%2d ", arr[i]);
    }
}

int main() {
    int arr[] = {10, 9, 12, 4, 5, 2, 8, 5, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    PrintHistogram(arr, n);

    return 0;
}
