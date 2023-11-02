#include <stdio.h>
#include <stdlib.h>

int is_leap_year(int y)
{ return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0); }

int get_first_weekday(int year, int month, int days_in_month[12])
{
    int beginning = 3; //1800, Jan, 1 is wedndsay (3)
    for (int y = 1800; y < year; y++)
        beginning += is_leap_year(y) ? 366 : 365;
    for (int m = 0; m < month; m++)
        beginning += days_in_month[m];
    return beginning % 7;
}

void print_calendar(int year, int month)
{
    month--;
    const char* months[] = { "Jan","Feb","Mar","Apr","May","Jun",
        "Jul","Aug","Sep","Oct","Nov","Dec" };
    int days_in_month[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    if (is_leap_year(year))
        days_in_month[1] = 29;
    int first_week_day = get_first_weekday(year, month, days_in_month);
    printf("           %s %d            \n", months[month], year);
    printf(" ---------------------------\n");
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");
    for (int wkday = 0; wkday < first_week_day; wkday++)
        printf("    ");
    for (int day = 1; day < days_in_month[month] + 1; day++)
    {
        printf("%4d", day);
        if(((day + first_week_day) % 7) == 0)
            printf("\n");
    }
    printf("\n\n");
}

int main(void)
{
    for (int m = 1; m < 4; m++) print_calendar(1800, m);
    for (int m = 8; m <= 12; m++) print_calendar(2021, m);
    return 0;
}