#include <stdio.h>
int main()
{

  int age = 0;
  printf("Welcome to ARTO. \nPlease enter your age : ");
  scanf("%d", &age);
  printf("You have entered: %d\n", age);

  if (age < 18)
  {
    printf("You are too young, Kindly apply after you are 18 years of age.");
  }
  else if (age > 70)
  {
    printf("You are senior citizen, Unfortunately you cannot apply any more.");
  }
  else
  {
    printf("You are eligible for Driving License.");
  }

  return 0;
}