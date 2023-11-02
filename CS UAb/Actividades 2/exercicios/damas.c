#include <stdio.h>

#define MAX_N 16

int totalSolutions = 0;

void printBoard(int board[], int N) {
    printf("+");
    for (int i = 0; i < N; i++) {
        printf("---+");
    }
    printf("\n");
    
    for (int i = 0; i < N; i++) {
        printf("|");
        for (int j = 0; j < N; j++) {
            if (board[i] == j) {
                printf(" # |");
            } else {
                printf(" . |");
            }
        }
        printf("\n+");
        for (int k = 0; k < N; k++) {
            printf("---+");
        }
        printf("\n");
    }
    printf("\n");
}

int isSafe(int board[], int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i] == col || 
            board[i] - i == col - row || 
            board[i] + i == col + row) {
            return 0;
        }
    }
    return 1;
}

void solveNQueens(int board[], int row, int N) {
    if (row == N) {
        totalSolutions++;
        if (totalSolutions == 1) {
            printf("First solution:\n");
            printBoard(board, N);
        }
        return;
    }
    
    for (int col = 0; col < N; col++) {
        if (isSafe(board, row, col)) {
            board[row] = col;
            solveNQueens(board, row + 1, N);
            board[row] = -1;
        }
    }
}

int main() {
    int N;
    int board[MAX_N];
    
    printf("Número de Damas (entre 4 e 16): ");
    scanf("%d", &N);
    
    if (N < 4 || N > 16) {
        printf("Número de damas fora do intervalo permitido.\n");
        return 1;
    }
    
    for (int i = 0; i < MAX_N; i++) {
        board[i] = -1;
    }
    
    solveNQueens(board, 0, N);
    
    if (totalSolutions == 0) {
        printf("Não existe solução para o número de damas especificado.\n");
    } else {
        printf("Total: %d\n", totalSolutions);
    }
    
    return 0;
}
