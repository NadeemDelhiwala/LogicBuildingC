#include <stdio.h>
int main()
{
  int year;
  printf("Enter an year : ");
  scanf("%d", &year);
  /*
    Leap year logic:

    -  year % 4 == 0 → The year is divisible by 4.
            (Leap years usually happen every 4 years.)
    - year % 100 != 0 → The year is not divisible by 100.
            (Years like 1900, 2100 are divisible by 100, but they are not leap years.)
    - year % 400 == 0 → The year is divisible by 400.
            (This is a special rule: years like 2000 and 2400 are leap years, even though they’re divisible by 100.)


  */
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
  {
    printf("%d is a leap year.\n", year);
  }
  else
  {
    printf("%d is not a leap year.\n", year);
  }
  return 0;
}
