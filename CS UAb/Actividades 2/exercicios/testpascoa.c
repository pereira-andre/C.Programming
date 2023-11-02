#include <stdio.h>

// Função para verificar se um ano é bissexto
int is_leap_year(int year) {
    if (year % 4 != 0) {
        return 0;
    } else if (year % 100 != 0) {
        return 1;
    } else if (year % 400 != 0) {
        return 0;
    } else {
        return 1;
    }
}

// Função para obter o número de dias em um mês
int get_days_in_month(int month, int year) {
    switch (month) {
        case 4: case 6: case 9: case 11: return 30;
        case 2: return (is_leap_year(year) ? 29 : 28);
        default: return 31;
    }
}

// Função para ajustar a data, levando em conta a mudança de mês e ano
void adjust_date(int *day, int *month, int *year, int adjustment) {
    *day += adjustment;
    while (*day > get_days_in_month(*month, *year)) {
        *day -= get_days_in_month(*month, *year);
        *month += 1;
        if (*month > 12) {
            *month = 1;
            *year += 1;
        }
    }
    while (*day < 1) {
        *month -= 1;
        if (*month < 1) {
            *month = 12;
            *year -= 1;
        }
        *day += get_days_in_month(*month, *year);
    }
}

// Função para calcular a data da Páscoa
void calculate_easter(int year, int *easter_month, int *easter_day) {
    // Algoritmo de Meeus/Jones/Butcher
    int a = year % 19;
    int b = year / 100;
    int c = year % 100;
    int d = b / 4;
    int e = b % 4;
    int f = (b + 8) / 25;
    int g = (b - f + 1) / 3;
    int h = (19 * a + b - d - g + 15) % 30;
    int i = c / 4;
    int k = c % 4;
    int l = (32 + 2 * e + 2 * i - h - k) % 7;
    int m = (a + 11 * h + 22 * l) / 451;
    *easter_month = (h + l - 7 * m + 114) / 31;
    *easter_day = ((h + l - 7 * m + 114) % 31) + 1;
}

int main() {
    int year, easter_month, easter_day;
    printf("Insira o ano para calcular os feriados móveis: ");
    scanf("%d", &year);

    calculate_easter(year, &easter_month, &easter_day);

    // Ajustar para Sexta-feira Santa (2 dias antes da Páscoa)
    int good_friday_day = easter_day;
    int good_friday_month = easter_month;
    int good_friday_year = year;
    adjust_date(&good_friday_day, &good_friday_month, &good_friday_year, -2);

    // Ajustar para Carnaval (47 dias antes da Páscoa)
    int carnival_day = easter_day;
    int carnival_month = easter_month;
    int carnival_year = year;
    adjust_date(&carnival_day, &carnival_month, &carnival_year, -47);

    // Ajustar para Corpus Christi (60 dias após a Páscoa)
    int corpus_christi_day = easter_day;
    int corpus_christi_month = easter_month;
    int corpus_christi_year = year;
    adjust_date(&corpus_christi_day, &corpus_christi_month, &corpus_christi_year, 60);

    printf("Páscoa: %d de Abril\n", easter_day);
    printf("Sexta-feira Santa: %d de Abril\n", good_friday_day);
    printf("Carnaval: %d de %s\n", carnival_day, (carnival_month == 3) ? "Março" : "Fevereiro");
    printf("Corpus Christi: %d de Junho\n", corpus_christi_day);

    return 0;
}
