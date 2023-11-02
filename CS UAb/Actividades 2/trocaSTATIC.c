#include <stdio.h>
 
int Troca(int *x, int *y){

    static int trocas = 0;      //introduzimos um contador estático para a propria funçao
    int aux;
    aux = *x;
    *x =*y;
    *y=aux;
    return ++trocas;            //permite retornar contagem ++trocas (+1 troca)
}

 
int main()
{
    int x=123, y=321;
    printf("Troca %d: ", Troca(&x,&y)); printf("x=%d, y=%d\n",x,y);
    printf("Troca %d: ", Troca(&x,&y)); printf("x=%d, y=%d\n",x,y);
    printf("Troca %d: ", Troca(&x,&y)); printf("x=%d, y=%d\n",x,y);
}