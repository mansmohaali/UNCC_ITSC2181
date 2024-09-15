#include <stdio.h>

int main() {
  char character, character2;
  float number;
  int integer;
  printf(
      "Enter two characters, a space, a float, a space, and a whole number:\n");
  // character, character2, number, integer = scanf("%c %c %f %d", &character,
  // &character2, &number, &integer);
  int input = scanf("%c %c %f %d", &character, &character2, &number, &integer);
  printf("%c%c\n%.2f\n%d\n", character, character2, number, integer);

  return 0;
}