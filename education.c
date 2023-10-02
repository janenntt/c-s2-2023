#include <stdio.h>

int main(void) {
  int x; // declare x to store the number of years in education
  // prompt the user to enter the number of years they have spent in education
  printf("Enter the number of years you has spent in education so far: ");
  // read in the user's input
  scanf("%d", &x);
  if (x < 0) {
    printf("Invalid input.");
  } else {
    // check if the number of years meet some specific levels
    if (x >= 0 && x <= 7) {
      printf(
          "Your level of educational attainment is primary level eduction.\n");
    } else if (x >= 8 && x <= 12) {
      printf(
          "Your level of educational attainment is secondary level "
          "education.\n");
    } else {
      printf(
          "Your level of educational attainment is tertiary level "
          "education.\n");
    }
  }
  return 0;
}