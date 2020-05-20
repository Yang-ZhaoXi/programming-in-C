#include <stdio.h>

struct date {
  int year;
  int month;
  int day;
};

int f (int year, int month) {
  if (month <= 2) {
    return year - 1;
  }
  else {
    return year;
  }
}

int g (int month) {
  if (month <= 2) {
    return month + 13;
  }
  else {
    return month + 1;
  }
}

int dateToNum (struct date rawDate)
{
  int f (int year, int month);
  int g (int month);
  int year, month, day, num;

  year = rawDate.year;
  month = rawDate.month;
  day = rawDate.day;

  num = 1461 * f(year, month) / 4 + 153 * g(month) / 5 + day;

  return num;
}

int main (void)
{
  int days;
  int dateToNum (struct date rawDate);
  struct date date1 = {2004, 8, 8};
  struct date date2 = {2005, 2, 22};

  days = dateToNum(date2) - dateToNum(date1);

  printf ("The days between %i/%i/%i and %i/%i/%i is %i\n",
      date1.year,
      date1.month,
      date1.day,
      date2.year,
      date2.month,
      date2.day,
      days);

  return 0;
}
