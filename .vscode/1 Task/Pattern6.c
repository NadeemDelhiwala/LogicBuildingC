#include <stdio.h>
int main()
{
  int side_length;
  int area_square = 0;
  printf("-- Area of Square Calculation ---\n");
  printf("Enter side length: ");
  scanf("%d", &side_length);
  area_square = side_length * side_length;
  printf("Area of Square = %d\n", area_square);

  return 0;
}