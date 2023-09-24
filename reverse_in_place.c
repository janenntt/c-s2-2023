#include <stdio.h>
#include <string.h>

int main() {
  char str[21];  // Allocate space for 20 characters plus '\0'
  int length, i, j;

  printf("Enter a string (up to 20 characters): ");
  scanf("%20s", str);

  length = strlen(str);

  // Reverse the string in place
  for (i = 0, j = length - 1; i < j; i++, j--) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }

  // Print the reversed string
  printf("%s\n", str);

  return 0;
}