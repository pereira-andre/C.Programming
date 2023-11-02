#include <stdio.h>
 
int Bissexto(int ano)
{
    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
        return 1; // é bissexto
    }
}
 
int main()
{
   int ano;
   printf("Indique ano: ");
   scanf("%d", &ano);
 
   /* teste de ano bissexto */
   if(Bissexto(ano)==1)
     printf("Bissexto");
   else
     printf("Normal");
}