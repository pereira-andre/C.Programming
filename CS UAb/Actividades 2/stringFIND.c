#include <stdio.h>
 
char *strstr(char *find, char *str)
{
    int i;
    while (*str != 0){
        //tenta igualar em str
        //tem de encontrar 1 caractere + 1 igual ao input 
        //e ainda tem de ser um caractere igual ao input (esta por ordem no ciclo)
        for (i = 0; str[i] != 0 && find[i] != 0 && find[i] == str[i]; i++);
        //se chegou ao fim da string de procura, então há igualdade
        if (find[i] == 0)
        //retorna o início da igualdade
            return str;
        str++;
    }
 
    return NULL;
}
 
int main()
{
    char str[] = "percorrer toda a string str";
    char find[10];
    char *resultado;
 
    printf("Introduza a string de procura: ");
    gets(find);
    resultado = strstr(find, str);
    printf("Resultado: %s\n", resultado);
}
