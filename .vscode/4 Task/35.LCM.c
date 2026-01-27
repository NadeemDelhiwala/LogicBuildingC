#include <stdio.h>
#include <math.h>
int main()
{
  int num_first, num_second;
  printf("Welcome to LCM Calculator \n ");
  printf("Enter first number: ");
  scanf("%d", &num_first);
  printf("Enter second number: ");
  scanf("%d", &num_second);

  int min = num_first < num_second ? num_first : num_second;
  int max = num_first * num_second;
  int i = min;
  for (i = min; i <= max; i++)
  {
    /* code */
    if (i % num_first == 0 && i % num_second == 0)
    {
      printf("LCM is %d\n", i);
      break;
    }
  }

  printf("LCM of %d and %d = %d\n", num_first, num_second, i);

  return 0;
}