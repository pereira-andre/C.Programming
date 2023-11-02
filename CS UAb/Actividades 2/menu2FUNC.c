#include <stdio.h>
 
int Menu()
{
    int opcao;
    printf("\nMenu:\n1 - opcao A\n2 - opcao B\n3 - opcao C\n0 - sair");
    scanf("%d", &opcao);
    return opcao;
}
 
int main()
{
   int opcao;
 
   opcao=Menu();
 
   while(opcao>0)
   {
     /* ver qual é a opção */
     if(opcao==1)
       printf("\nOpcao: Opcao escolhida A");
     else if(opcao==2)
       printf("\nOpcao: Opcao escolhida B");
     else if(opcao==3)
       printf("\nOpcao: Opcao escolhida C");
     else 
       printf("\nOpcao: Opcao invalida");
 
     opcao=Menu();
   }
   printf("\nOpcao: Fim do programa.");
}