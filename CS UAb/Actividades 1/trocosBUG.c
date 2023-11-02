#include <stdio.h>

//esta versão tem um bug porque para valores 0.01 C não consegue resolver alguns
//calculos, então é necessário converter em inteiros e fazer as subtrações

int main() {
    double montante,contagem=0.0;
    printf("Introduza um montante em euros, podendo ter centimos: ");
    scanf("%lf", &montante);

    //subtrai 2€
    while(montante >= 2.0){
        montante= montante-2.0;
        //printf("%.2lf\n",montante);
        contagem++;
    }
    if(contagem != 0.0){
        printf("2 euros: %.lf\n", contagem);
    }
    contagem = 0.0;
    
    //subtrai 1€
    while(montante >= 1.0){
        montante= montante-1.0;
        //printf("%.2lf\n",montante);
        contagem++;
    }
    if(contagem != 0.0){
        printf("1 euro: %.lf\n", contagem);
    }
    contagem = 0.0;
    
    while(montante >= 0.5){
        montante= montante-0.5;
        //printf("%.2lf\n",montante);
        contagem++;
    }
    if(contagem != 0.0){
        printf("50 centimos: %.lf\n", contagem);
    }
    contagem = 0.0;
    
    while(montante >= 0.2){
        montante= montante-0.2;
        //printf("%.2lf\n",montante);
        contagem++;
    }
    if(contagem != 0.0){
        printf("20 centimos: %.lf\n", contagem);
    }
    contagem = 0.0;
    
    // Arredonda o montante para o valor mais próximo em cêntimos
    //if((int) montante % 2 != 0){
    //    montante+=0.01;
    //}
    //printf("%.2lf\n",montante);
    
    while(montante >= 0.05){
        montante= montante-0.05;
        //printf("%.2lf\n",montante);
        contagem++;
    }
    if(contagem != 0.0){
        printf("5 centimos: %.lf\n", contagem);
    }
    contagem = 0.0;
    
    while(montante >= 0.02){
        montante= montante-0.02;
        //printf("%.2lf\n",montante);
        contagem++;
    }
    if(contagem != 0.0){
        printf("2 centimos: %.lf\n", contagem);
    }
    contagem = 0.0;
    
    //printf("%.2lf\n",montante);
    
    while(montante >= 0.01){
        montante= montante-0.01;
        //printf("%.2lf\n",montante);
        contagem++;
    }
    if(contagem != 0.0){
        printf("1 centimo: %.lf\n", contagem);
    }
    return 0;
}
