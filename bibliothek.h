#ifndef BIBLIOTHEK_H_INCLUDED
#define BIBLIOTHEK_H_INCLUDED

struct date
{
  int day;
  int month;
  int year;
};

int day_of_the_year(struct date datum);

struct date input_date();

int is_leapyear(int year);

int get_days_for_month(int month, int year);

int exists_date(struct date datum);

#endif // BIBLIOTHEK_H_INCLUDED
