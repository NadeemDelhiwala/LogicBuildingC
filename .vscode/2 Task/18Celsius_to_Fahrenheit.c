#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
  /* code */
  float temperature_celsius = 0.0f;
  float temperature_fahrenheit = 0.0f;
  printf("Calculate the Celsius to Fahrenheit Conversion Operation \n: ");
  printf("Enter the Temperature in Celsius: ");
  scanf("%f", &temperature_celsius);
  temperature_fahrenheit = (temperature_celsius * 9 / 5) + 32;
  printf("The Temperature in Fahrenheit is: %f\n", temperature_fahrenheit);
  return 0;
}
