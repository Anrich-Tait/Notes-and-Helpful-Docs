#include <stdio.h>

int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;    //lower limit of temperature table
  upper = 300;  //upper limit 
  step = 20;    //step size

  //Table heading:
  printf("Fahrenheit to Celsius conversion table: \n\n");
  
  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0/90) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
