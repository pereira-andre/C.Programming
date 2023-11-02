#include <stdio.h>

int main()
{
    int horas, minutos, segundos;
    printf("Calculo do numero de segundos desde o inicio do dia.\nHora: ");
    scanf("%d", & horas);
    printf("Minuto: ");
    scanf("%d", & minutos);
    printf("Segundos: ");
    scanf("%d", & segundos);
    printf("Numero de segundos desde o inicio do dia: %d", horas*3600+minutos*60+segundos);

}