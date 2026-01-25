#include <stdio.h>
int main()
{

  char gender;
  printf("Welcome to ARTO. \nPlease enter your age : ");
  printf("Enter your gender (M/F): ");
  scanf(" %c", &gender);
  gender == 'M' ? printf("You have entered: Male\n") : printf("You have entered: Female\n");
  return 0;
}