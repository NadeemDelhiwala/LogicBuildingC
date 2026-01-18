#include <stdio.h>
int main()
{
  int num1_Int;
  float num2_Float;
  double num3_Double;
  char character_Char;
  num1_Int = 10;
  num2_Float = 20.5f;
  num3_Double = 30.99;
  character_Char = 'A';
  printf("Integer value: %d \n", num1_Int);
  printf("Size of Integer value: %d \n", sizeof(int));
  printf("Float value: %.2f \n", num2_Float);
  printf("Size of Float value: %d \n", sizeof(float));
  printf("Double value: %.21f \n", num3_Double);
  printf("Size of Double value: %d \n", sizeof(double));
  printf("Character value: %c \n", character_Char);
  printf("Size of Character value: %d \n", sizeof(char));

  return 0;
}