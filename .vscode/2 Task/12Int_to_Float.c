#include <stdio.h>
int main(int argc, char const *argv[])
{
  /* code */
  int num1 = 0;
  printf("Integer to float Conversion Operation \n: ");
  printf("Enter one numbers: ");
  scanf("%d", &num1);
  printf("The integer value is: %d\n", num1);
  printf("The float value is: %f\n", (float)num1);
  return 0;
}
