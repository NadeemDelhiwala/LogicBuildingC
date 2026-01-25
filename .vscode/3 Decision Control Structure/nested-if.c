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
  
   if(is_indian == 'Y' || is_indian == 'y') 
   {  
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
}
  else {
      printf("You must be an Indian citizen to apply for a Driving License.");
  } 
  return 0;
}