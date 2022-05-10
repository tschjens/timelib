/**
* Tag des Jahres
* Autor: Jens Tscherbatko
* erstellt am 29.03.2022
**/

#include <stdio.h>
#include <stdlib.h>

/*Schaltjahrkontrolle aus der Aufgabe Schaltjahresbestimmung*/
int schaltjahr(int jahr)
{
    int istschaltjahr;
    if (jahr % 4 == 0){
        if(jahr % 100 == 0){
            if(jahr % 400 == 0){
                istschaltjahr = 1;
            }
            else
            {
                istschaltjahr = 0;
            }
        }
        else
        {
            istschaltjahr = 1;
        }
    }
    else
    {
        istschaltjahr = 0;
    }
    return istschaltjahr;
}


int main()
{
    int tage_pro_monat[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int tag;
    int monat;
    int jahr;
    int anzahltage = 0;
    int istschaltjahr;

    printf("Geben Sie das Jahr ein: ");
    scanf("%i",&jahr);
    printf("Geben Sie den Monat ein: ");
    scanf("%i",&monat);
    printf("Geben Sie den Tag ein: ");
    scanf("%i",&tag);
    istschaltjahr = schaltjahr(jahr);
    if(istschaltjahr == 1)
    {
        tage_pro_monat[1] = 29;
    }
    if(monat < 13 && monat > 0)
    {
        if(tag > 0 && tag <= tage_pro_monat[monat - 1])
        {
            for(int i = 0; i < monat - 1; i++)
            {
                anzahltage += tage_pro_monat[i];
            }
            anzahltage += tag;
            printf("Tag %i",anzahltage);
        }
        else
        {
            printf("Ungueltiger Tag");
        }
    }
    else
    {
        printf("Ungueltiger Monat");
    }


}
