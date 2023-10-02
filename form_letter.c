#include <stdio.h>
#include <string.h>

int main(void) {
  // declare character arrays to store first name and last name
  char firstName[11];
  char lastName[11];
  int age;
  float employmentFraction;
  // prompt user to enter their first name, last name, age , and employment
  // fraction
  scanf("%10s %10s %d %f", firstName, lastName, &age, &employmentFraction);
  // print
  printf(
      "Your name is %s %s, you are %d years old and your employment fraction "
      "is %.1f",
      firstName, lastName, age, employmentFraction);

  return 0;
}