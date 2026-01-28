#include <stdio.h>
#include <math.h>
int main()
{
  int num_first, num_second;
  printf("Welcome to GCD Calculator \n ");
  printf("Enter first number: ");
  scanf("%d", &num_first);
  printf("Enter second number: ");
  scanf("%d", &num_second);

  int min = num_first < num_second ? num_first : num_second;
  /**
   * 
   * two nos let's 2 and 4
   * min = 2 
   * then GCD will be 2 or less than 2 and would be 1 
   */
  
  for(int i=min; i>=1; i--)
  {
    if(num_first % i == 0 && num_second % i == 0)
    {
      printf("GCD of %d and %d is: %d \n", num_first, num_second, i);
      break;
    }     
  }

  return 0;
}