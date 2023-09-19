#include <stdio.h>
#include <string.h>

int main(void) {
  char firstName[11];
  char lastName[11];
  int age;
  float employmentFraction;

  scanf("%10s %10s %d %f", firstName, lastName, &age, &employmentFraction);

  printf(
      "Your name is %s %s, you are %d years old, and your employment fraction "
      "is %.1f\n",
      firstName, lastName, age, employmentFraction);

  return 0;
}