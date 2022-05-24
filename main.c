/**
* Tag des Jahres
* Autor: Jens Tscherbatko
* erstellt am 17.05.2022
**/

#include "bibliothek.h"




int main()
{
    int day = 0;
    int month = 0;
    int year = 0;
    int anzahltage = 0;
    printf("Geben Sie das Jahr ein: ");
    scanf("%i",&year);
    printf("Geben Sie den Monat ein: ");
    scanf("%i",&month);
    printf("Geben Sie den Tag ein: ");
    scanf("%i",&day);
   // input_date(&day, &month, &year);
    if (exists_date(day,month,year) == 1)
    {
        anzahltage = day_of_the_year(day, month, year);
        printf("Tag %i",anzahltage);
    }
    else
    {
        printf("Fehlerhafte eingabe");
    }
}


