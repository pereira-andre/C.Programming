#include <stdio.h>
 
int main()
{
    int opcao;
    do
    {
        /* mostrar as opções do menu */
        printf("\nMenu:\n1 - opcao A\n2 - opcao B\n3 - opcao C\n0 - sair");
        scanf("%d",&opcao);
        /* ver qual é a opção */
        switch(opcao){
        case 1:
        printf("\nOpcao: Opcao escolhida A");
        break;
        case 2:
       printf("\nOpcao: Opcao escolhida B");
       break;
        case 3:
       printf("\nOpcao: Opcao escolhida C");
       break;
       case 0:
       printf("\nOpcao: Fim do programa.");
       break;
       default:
       printf("\nOpcao: Opcao invalida");
       break;
            
        }
    }while(opcao>0);
    
    return 0;
}