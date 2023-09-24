#include <stdio.h>

int main(void) {
  int nums[] = {11, 3, 9, 7, 6, 10, 13, 17, 2, 8, 3};
  // declare two integer arrays for even and odd numbers
  int evens[11];
  int odds[11];
  int count_evens = 0;
  int count_odds = 0;
  // interating through the nums array
  for (int i = 0; i < 11; i++) {
    if (nums[i] % 2 == 0) {
      evens[count_evens] = nums[i];
      count_evens++;  // if the number is even, add it to the evens array
    } else {
      odds[count_odds] = nums[i];
      count_odds++;  // if the number is odd, add it to the odds array
    }
  }
  // iterating through the odds array and print out its elements
  for (int i = 0; i < count_odds; i++) {
    printf("%d ", odds[i]);
  }
  printf("\n");

  // iterating through the evens array and print out its elements
  for (int i = 0; i < count_evens; i++) {
    printf("%d ", evens[i]);
  }
  printf("\n");

  return 0;
}