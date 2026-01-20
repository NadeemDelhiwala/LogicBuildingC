#include <stdio.h>
int main(int argc, char const *argv[])
{
  /* code */
  int age;
  printf("Welcome to ARTO. \nPlease enter your age : ");
  scanf("%d", &age);
  printf("You have entered: %d\n", age);
  if (age >= 18)
  {
    printf("You are eligible for Driving License.");
  }
  else
  {
    printf("You are not eligible for Driving License.");
  }
  // 0  and NULL are considered false
  // any non zero value is considered true

  return 0;
}
