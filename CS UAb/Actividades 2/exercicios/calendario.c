#include <stdio.h>
#include <stdlib.h>

static const char *months[] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
static const int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

static int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

static int get_days_in_month(int year, int month0) {
    if (month0 == 1) {
        return 28 + is_leap_year(year);
    } else {
        return monthDays[month0];
    }
}

// Função para calcular o dia da semana de uma data específica
static int get_dow(int year, int month0, int day) {
    int dow = 3;
    while (year-- > 1800) {
        int leap_days = is_leap_year(year);
        dow += 365 + leap_days;
    }
    while (month0--)
        dow += monthDays[month0];
    dow += day - 1;
    return dow % 7;
}

// Algoritmo de Meeus/Jones/Butcher para calcular a Páscoa
static void calculate_easter(int year, int *easter_month, int *easter_day) {
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

const char* isHoliday(int year, int month, int day) {
    // Feriados fixos
    if ((month == 1 && day == 1) || (month == 4 && day == 25) || (month == 5 && day == 1) || (month == 6 && day == 10) || (month == 10 && day == 5) || (month == 12 && day == 1) || (month == 12 && day == 25)) {
        return "F";
    }

    int easter_month, easter_day;
    calculate_easter(year, &easter_month, &easter_day);

    // Calcula a Sexta-feira Santa (2 dias antes da Páscoa)
    int good_friday_month = easter_month;
    int good_friday_day = easter_day - 2;
    if (good_friday_day < 1) {
        good_friday_month--;
        good_friday_day += monthDays[good_friday_month - 1];
        if (good_friday_month == 2) {
            good_friday_day += is_leap_year(year) ? 1 : 0;
        }
    }

    // Calcula o Carnaval (47 dias antes da Páscoa)
    int carnival_month = easter_month;
    int carnival_day = easter_day - 47;
    while (carnival_day < 1) {
        carnival_month--;
        if (carnival_month < 1) carnival_month = 12;
        carnival_day += monthDays[carnival_month - 1];
        if (carnival_month == 2) {
            carnival_day += is_leap_year(year) ? 1 : 0;
        }
    }

    // Calcula o Corpus Christi (60 dias após a Páscoa)
    int corpus_christi_month = easter_month;
    int corpus_christi_day = easter_day + 60;
    while (corpus_christi_day > monthDays[corpus_christi_month - 1]) {
        corpus_christi_day -= monthDays[corpus_christi_month - 1];
        corpus_christi_month++;
        if (corpus_christi_month > 12) corpus_christi_month = 1;
        if (corpus_christi_month == 2) {
            corpus_christi_day -= is_leap_year(year) ? 1 : 0;
        }
    }

    // Verifica se a data é um feriado móvel
    if ((month == easter_month && day == easter_day) ||
        (month == good_friday_month && day == good_friday_day) ||
        (month == carnival_month && day == carnival_day) ||
        (month == corpus_christi_month && day == corpus_christi_day)) {
        return "F";
    }

    return NULL;
}

int main() {
    int year, month;

    scanf("%d %d", &year, &month);

    int month0 = month - 1;
    int day = 1;

    int dow = get_dow(year, month0, day);
    int num_days = get_days_in_month(year, month0);

    printf(" %s de %d:\n", months[month0], year);
    printf("#######################\n");
    printf("# D  S  T  Q  Q  S  S #\n");
    printf("#######################\n#");

    for (int i = 0; i < dow; ++i)
        printf("   ");

    while (day <= num_days) {
        const char* holiday = isHoliday(year, month, day);
        if (holiday) {
            printf(" %s ", holiday);
        } else {
            printf("%2d ", day);
        }
        day++;
        dow = (dow + 1) % 7;
        if (!dow)
            printf("#\n#");
    }

    for (int i = dow; i < 7 && dow != 0; ++i)
        printf("   ");
    printf("#\n#######################\n");

    return 0;
}
