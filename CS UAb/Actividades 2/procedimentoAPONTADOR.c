#include <stdio.h>

/*passagem de parâmetros é designada de passagem por referência, 
uma vez que se envia a referência da variável, e não a própria variável, 
para que o conteúdo da variável possa ser alterado.*/

void Troca(int *x, int *y){
   int aux=*x;
       *x=*y;
       *y=aux;
    }

int main() {
   int x=123, y=321;
   Troca(&x,&y);
   printf("x: %d y: %d",x,y);
}