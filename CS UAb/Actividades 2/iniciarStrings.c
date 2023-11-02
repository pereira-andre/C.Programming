#include <stdio.h>
 
int main()
{
    char str1[]="ABC";
    char str2[]={'A','B','C','\0'};
    char str3[]={65,66,67,0};
 

    printf("str1: %s\nstr2: %s\nstr3: %s",str1,str2,str3); 
}