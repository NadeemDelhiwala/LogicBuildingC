#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
  /* code */
  float temperature_fahrenheit = 0.0f;
  float temperature_celsius = 0.0f;
  printf("Calculate the Fahrenheit to Celsius Conversion Operation \n: ");
  printf("Enter the Temperature in Fahrenheit: ");
  scanf("%f", &temperature_fahrenheit);
  temperature_celsius = (temperature_fahrenheit - 32) * 5 / 9;
  printf("The Temperature in Celsius is: %f degree\n", temperature_celsius);
  return 0;
}
