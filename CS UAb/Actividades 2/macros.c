#include <stdio.h>
#define SIZE 10
#define INICIO 0
#define NOVALINHA "\n"
#define IMPRIMEVALOR "%3d "
#define OPERACAO1 i+j;
#define OPERACAO2 i*j;
#define OPERACAO3 matriz1[i][j]+matriz2[i][j];
#define ACESSO(a,b) matrizSoma[a][b]
#define ITERAR_i for(i=INICIO;i<SIZE;i++)
#define ITERAR_j for(j=INICIO;j<SIZE;j++)
#define ITERAR_ij ITERAR_i ITERAR_j
 
int main()
{
     int matriz1[SIZE][SIZE];
     int matriz2[SIZE][SIZE];
     int matrizSoma[SIZE][SIZE];
     int i,j;
 
    /* inicializar matrizes */
    ITERAR_ij
    {
        matriz1[i][j] = OPERACAO1;
        matriz2[i][j] = OPERACAO2;
    }

    /* somar matrizes */
    ITERAR_ij
    matrizSoma[i][j] = OPERACAO3;

    /* mostrar resultado */
    ITERAR_i
    {
        /* mudar de linha */
        printf(NOVALINHA);
        ITERAR_j
        printf(IMPRIMEVALOR, ACESSO(i, j));
    }
     
}
