#include <stdio.h>

int main() {
  int grade;
  // char empty;
  printf("Please enter the numeric grade: ");
  // grade, empty = scanf("%d %c", &grade, &empty);
  // empty = scanf("%d", &grade);
  // grade = scanf("%d", &grade);
  // printf("%d", grade);
  scanf("%d", &grade);
  if (grade <= 59) {
    printf("The letter grade is a F.");
  } else if (grade >= 60 && grade <= 69) {
    printf("The letter grade is a D.");
  } else if (grade >= 70 && grade <= 79) {
    printf("The letter grade is a C.");
  } else if (grade >= 80 && grade <= 89) {
    printf("The letter grade is a B.");
  } else if (grade >= 90 && grade <= 100) {
    printf("The letter grade is a A.");
  } else {
    printf("You are super smart! You got an A+! Congratulations!");
  }

  return 0;
}