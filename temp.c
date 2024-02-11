#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  int input_temp;
  char temp;

  input_temp = atoi(argv[1]);
  temp = strtol(argv[2]);

  if (strcmp(temp, 'f') || strcmp(temp, 'F')) {
    calc_val = (5.0 / 9.0) * (input_temp - 32.0);
    printf("%d Celsius equals %d Fahrenheit", input_temp, calc_val);
  } else if (strcmp(temp, 'c') || strcmp(temp, 'C')) {
    calc_val = ((5.0 / 9.0) * input_temp) + 32.0;
    printf("%d Fahrenheit equals %d Celsius", input_temp, calc_val);
  } else {
    printf("Wrong Input");
  }
}
