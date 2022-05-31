/**
* Tag des Jahres
* Autor: Jens Tscherbatko
* erstellt am 17.05.2022
**/
#include <stdio.h>
#include <stdlib.h>
#include "bibliothek.h"


int main()
{
    struct date datum1;
    datum1 = input_date();
    if (exists_date(datum1) == 1)
    {
        printf("Tag %i",day_of_the_year(datum1));
    }
    else
    {
        printf("Fehlerhafte eingabe");
    }
}


