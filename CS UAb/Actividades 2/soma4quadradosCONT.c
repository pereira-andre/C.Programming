#include <stdio.h>
 
int main()
{
    int soma=0, i=1, continua=1;
    while(continua)
    {
        soma+=i*i;
        i++;
        if(i>4)
            continua = 0;

    }
    printf("Soma dos primeiros 4 quadrados: %d", soma);
}