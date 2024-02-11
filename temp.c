#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  int input_temp;
  string temp;

  input_temp = atoi(argv[1]);
  temp = strtol(argv[2]);

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  printf("Fahrenheit \t  Celsius\n");
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f \t\t %6.2f\n", fahr, celsius);
    fahr += step;
  }
}
