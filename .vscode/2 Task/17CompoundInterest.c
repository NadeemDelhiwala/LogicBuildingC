#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
  /* code */
  float principal = 0.0f, time_period = 0.0f, rate_of_interest = 0.0f;
  float compound_Interest = 0.0f;
  printf("Calculate the Compound Interest Operation \n: ");
  printf("Enter Principal amount: ");
  scanf("%f", &principal);
  printf("Enter Time period (in years): ");
  scanf("%f", &time_period);
  printf("Enter Rate of Interest (in percentage): ");
  scanf("%f", &rate_of_interest);
  if (principal <= 0 || time_period <= 0 || rate_of_interest <= 0)
  {
    printf("Principal, Time period, and Rate of Interest must be positive numbers.\n");
    return 1;
  }
  compound_Interest = principal * (pow((1 + rate_of_interest / 100.0f), time_period) - 1);
  printf("The Compound Interest stored in variable is: %f\n", compound_Interest);
  return 0;
}
