#include <stdio.h>

int Menu(){
    
    int opcao;
    printf("\nMenu:\n1 - opcao A\n2 - opcao B\n3 - opcao C\n0 - sair");
    scanf("%d", &opcao);
    return opcao;
}

int main()
{
   int opcao;
   do
   {
     opcao=Menu();
     /* ver qual é a opção */
     if(opcao==1)
       printf("\nOpcao: Opcao escolhida A");
     else if(opcao==2)
       printf("\nOpcao: Opcao escolhida B");
     else if(opcao==3)
       printf("\nOpcao: Opcao escolhida C");
     else if(opcao!=0)
       printf("\nOpcao: Opcao invalida");
     else
        break;
   } while(opcao >0 || opcao <4);
   printf("\nOpcao: Fim do programa.");
}