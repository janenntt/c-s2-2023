#include <ctype.h>
#include <stdio.h>

int main() {
  char name[21];  // Allocate space for 20 characters plus '\0'
  int i = 0;

  fgets(name, sizeof(name), stdin);

  // Convert the string to uppercase
  while (name[i] != '\0' && i < 20) {
    if (isalpha(name[i])) {
      name[i] = toupper(name[i]);
    }
    i++;
  }

  // Print the uppercase string
  printf("%s\n", name);

  return 0;
}