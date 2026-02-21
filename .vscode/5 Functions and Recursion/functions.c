#include <stdio.h>
void count_to_100();
int sum(int, int);
void suma(int, int);
int addition;
int main(int argc, char const *argv[])
{
  /* code */
  count_to_100();
  int result = sum(25, 50);
  printf("\nThe sum of 25 and 50 is: %d\n", result);
  suma(25, 55);
  printf("The sum of 25 and 55 is: %d\n", addition);
  int x = 9;
  int y = 54;
  int z = sum(x, y);
  printf("The sum of %d and %d is: %d\n", x, y, z);
  return 0;
}
void count_to_100()
{
  for (int i = 1; i <= 100; i++)
  {
    printf("%d ", i);
  }
}
int sum(int first, int second)
{
  int addition = first + second;
  return addition;
}
void suma(int first, int second)
{
  addition = first + second;
}