#include <stdio.h>
int main()
{
  int age = 0;
  char is_indian;
  printf("Welcome to ARTO. \nPlease enter your age : ");
  scanf("%d", &age);
  printf("Are you an Indian citizen? (Y/N): ");
  scanf(" %c", &is_indian);

  printf("You have entered: %d\n", age);

  if ((age >= 18 && age < 70) && (is_indian == 'Y' || is_indian == 'y'))
  {
    /* code */
    printf("You are eligible to vote.\n");
  }
  else{
    printf("You are not eligible to vote.\n");
  }

    return 0;
}