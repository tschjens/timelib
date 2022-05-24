#ifndef BIBLIOTHEK_H_INCLUDED
#define BIBLIOTHEK_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

int day_of_the_year(int day, int month, int year);
void input_date(int *day, int *month, int *year);
int is_leapyear(int year);
int get_days_for_month(int month, int year);
int exists_date(int day, int month, int year);

#endif // BIBLIOTHEK_H_INCLUDED
