#include <stdio.h>
#include <math.h>

//Utiliza uma função recursiva para calcular o máximo divisor comum,
//com o algoritmo recursivo: mdc(x,y)=x se y=0, 
//caso contrário mdc(x,y)=mdc(y,mod(x,y)), 
//em que mod(x,y) é o resto da divisão de x por y

#include <stdio.h>

int mdc(int x, int y){
    //caso y=0, return x
    if(y == 0)
        return x;
    return mdc(y,x % y);
}

int main()
{
    int x, y;
    scanf("%d %d", & x, & y);
    printf("\n%d",mdc(x,y));
}
