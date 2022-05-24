#include <stdio.h>
#include <stdlib.h>
#include "bibliothek.h"


int day_of_the_year(struct date datum)
{

    int passed_days = 0;
    for(int i = 0; i < datum.month - 1; i++)
    {
        passed_days += get_days_for_month(i,datum.year);
    }
    passed_days += datum.day;
    return passed_days;
}
/*Eingabe der Werte*/
struct date input_date()
{
    struct date datum;
    printf("Geben Sie das Jahr ein: ");
    scanf("%i",&datum.year);
    printf("Geben Sie den Monat ein: ");
    scanf("%i",&datum.month);
    printf("Geben Sie den Tag ein: ");
    scanf("%i",&datum.day);

    return datum;
}

/*Schaltjahreskontrolle, Jahre vor 1582 sind ungültig*/
int is_leapyear(int year)
{
    int is_leapyear = 0;
    if (year < 1582){
        is_leapyear = -1;
    }
    else if (year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                is_leapyear = 1;
            }
            else
            {
                is_leapyear = 0;
            }
        }
        else
        {
            is_leapyear = 1;
        }
    }
    else
    {
        is_leapyear = 0;
    }

    return is_leapyear;
}
int get_days_for_month(int month, int year)
{
    int tage_pro_monat[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int days = 0;
    int leapyear = is_leapyear(year);
    if(leapyear == -1)
    {
        days = -1;
    }
    else if (leapyear == 1)
    {
        tage_pro_monat[1] = 29;
    }
    if (days != -1)
    {
        days = tage_pro_monat[month];
    }
    return days;
}

int exists_date(struct date datum)
{
    int exists = 0;
    if (datum.year < 2401 && datum.year > 1581)
    {
         if(datum.month < 13 && datum.month > 0)
        {
            if(datum.day > 0 && datum.day <= get_days_for_month(datum.month - 1,datum.year))
            {
                exists = 1;
            }
        }
    }
    return exists;
}
