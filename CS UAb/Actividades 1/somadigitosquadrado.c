#include <stdio.h>


int main(){
int i=0, resto, n, soma= 0,j;

printf("Calculo da soma do quadrado dos digitos de um numero:\n");
printf("Numero: ");
scanf("%d",&n);

if(n<=0){
    printf("Introduza um número positivo.");
} else{
    while(n>0){
        resto=n%10;
        soma= soma+(resto*resto);
        printf("n=%d; soma=%d\n",n, soma);
        n=n/10;
    }
}

printf("Resultado: %d", soma);

return 0;
}
