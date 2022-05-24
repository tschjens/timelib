

#include "bibliothek.h"



int day_of_the_year(int day, int month, int year)
{
    int passed_days = 0;
    for(int i = 0; i < month - 1; i++)
    {
        passed_days += get_days_for_month(i,year);
    }
    passed_days += day;
    return passed_days;
}

void input_date(int *day, int *month, int *year)
{
    printf("Geben Sie das Jahr ein: ");
    scanf("%i",&year);
    printf("Geben Sie den Monat ein: ");
    scanf("%i",&month);
    printf("Geben Sie den Tag ein: ");
    scanf("%i",&day);
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

int exists_date(int day, int month, int year)
{
    int exists = 0;
    if (year < 2401 && year > 1581)
    {
         if(month < 13 && month > 0)
        {
            if(day > 0 && day <= get_days_for_month(month - 1,year))
            {
                exists = 1;
            }
        }
    }
    return exists;
}
