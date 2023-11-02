 #include <stdio.h>
 
int Troca(int x,int y){
    int aux;
    x=aux;
    x=y;
    y=aux;
}

 int main()
 {
    int x=123, y=321;
    Troca(x,y);
    printf("x: %d y: %d",x,y);
 }