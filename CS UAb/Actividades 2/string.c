#include <stdio.h>
 
int main()
{
    char str[10];
    int i;
 
    printf("Introduza uma string: ");
    fgets(str,10,stdin);
 
    for(i=0; i<10;i++){
        if(str[i] == '\0'){
            break;
        }if(str[i] != '\0'){
            printf("\nCaracter %d: %c",i,str[i]);
        }
    }
return 0;
}
