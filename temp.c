#include <stdio.h>

int main(void) {
  int x; // declare a variable to store the temperature in celsius
  // prompt the user to enter a temperature in celsius
  printf("Enter a temperature in Celsius: ");
  // read in the user's input 
  scanf("%d", &x);
  // convert the temperature from celsius to fahrenheit and print it out
  printf("%d degrees Celsius is %d degrees in Fahrenheit.\n", x,
         x * 9 / 5 + 32);
  return 0;
}