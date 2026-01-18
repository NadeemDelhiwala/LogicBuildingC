#include <stdio.h>
int main(int argc, char const *argv[])
{
  /* code */
  float principal = 0.0f, time_period = 0.0f, rate_of_interest = 0.0f;
  float simple_Interest = 0.0f;
  printf("Calculate the Simple Interest Operation \n: ");
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
  simple_Interest = (principal * time_period * rate_of_interest) / 100.0f;
  printf("The Simple Interest stored in variable is: %f\n", simple_Interest);
  return 0;
}
