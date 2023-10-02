#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int count;
  // Ask for the number of integers to read
  printf("Enter the number of integers: ");
  scanf("%d", &count);

  // Dynamically allcoate memory for the integers
  int* integers = (int*)malloc(count * sizeof(int));

  // Read the integers into the array
  for (int i = 0; i < count; i++) {
    scanf("%d", &integers[i]);
  }
  int count_even = 0;
  int count_odd = 0;
  int even_index = 0;
  int odd_index = 0;
  // Dynamically allcoate memory for the odd and even integers
  int* evens = (int*)malloc(count * sizeof(int));
  int* odds = (int*)malloc(count * sizeof(int));
  for (int i = 0; i < count; i++) {
    if (integers[i] % 2 == 0) {
      evens[even_index++] = integers[i];
      count_even++;
    } else {
      odds[odd_index++] = integers[i];
      count_odd++;
    }
  }

  // print out odd and even integers

  for (int i = 0; i < count_odd; i++) {
    printf("%d ", odds[i]);
  }
  printf("\n");

  for (int i = 0; i < count_even; i++) {
    printf("%d ", evens[i]);
  }

  // Free dynamically allocated memory
  free(integers);
  free(evens);
  free(odds);

  return 0;
}