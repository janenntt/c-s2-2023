#include <stdio.h>

int main(void) {
  int month; // declare a variable to store the month number
  // prompt the user to enter a month as a number
  printf("Enter a month (in number): ");
  // user a switch statement to determine and print the corresponding month name
  scanf("%d", &month);
  switch (month) {
    case 1:
      printf("Jan\n");
      break;
    case 2:
      printf("Feb\n");
      break;
    case 3:
      printf("Mar\n");
      break;
    case 4:
      printf("Apr\n");
      break;
    case 5:
      printf("May\n");
      break;
    case 6:
      printf("Jun\n");
      break;
    case 7:
      printf("Jul\n");
      break;
    case 8:
      printf("Aug\n");
      break;
    case 9:
      printf("Sep\n");
      break;
    case 10:
      printf("Oct\n");
      break;
    case 11:
      printf("Nov\n");
      break;
    case 12:
      printf("Dec\n");
      break;
  }
  return 0;
}