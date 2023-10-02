#include <stdio.h>

int main(void) {
  int x;  // declare x to store user input
  printf("Enter a positive, three-digit integer: ");  // prompt the user to
                                                      // enter a positive,
                                                      // three-digit integer
  scanf("%d", &x);                                    // read in user's input
  // check if the entered number is a positive three-digit integer
  if (x >= 100 && x <= 999) {
    int a = x % 10;
    int b = (x / 10) % 10;
    int c = x / 100;
    // print out each extracted digit separated by a new line
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
  } else {
    printf("Invalid input.");
  }
  return 0;
}