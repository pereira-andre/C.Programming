#include <stdio.h>
 
int main()
{
   int segunda, terca, quarta, quinta, sexta, sabado, domingo;
   int total;
 
   /* introdução de valores */
   printf("Segunda: ");
   scanf("%d",&segunda);
   printf("Terca: ");
   scanf("%d",&terca);
   printf("Quarta: ");
   scanf("%d",&quarta);
   printf("Quinta: ");
   scanf("%d",&quinta);
   printf("Sexta: ");
   scanf("%d",&sexta);
   printf("Sabado: ");
   scanf("%d",&sabado);
   printf("Domingo: ");
   scanf("%d",&domingo);

   /* calculos */

    total=segunda+terca+quarta+quinta+sexta+sabado+domingo;
   printf("Soma: %d\n",total);
   printf("Media: %f\n",total/7.0);
}