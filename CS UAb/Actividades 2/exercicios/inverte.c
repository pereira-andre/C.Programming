#include <stdio.h>
#include <string.h>

/* definir o tamanho máximo de uma string em macros, para assim ser
fácil de alterar este valor sem ter de ver todo o código */
#define MAXSTR 255

void strinv(char *str)
{
    int len = strlen(str), i;// posicao do inicio e fim da string
    char aux; //variavel para guarda str inicial
    
    for(i=0; i<len/2;i++){  //percorremos só metade da str
        aux = str[i];       //guardamos a primeira letra
        str[i] = str[len-1-i]; //igualamis a 1ra à última
        str[len-1-i] = aux; //trocamos a última pela 1ra
        printf("  %d: %s\n", i, str); //check
    }
}



int main()
{
    char str[MAXSTR];
    fgets(str,MAXSTR,stdin);
    str[strlen(str)-1]=0;
    strinv(str);
    printf("%s", str);
}
