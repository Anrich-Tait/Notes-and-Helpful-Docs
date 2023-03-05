#include <stdio.h>

int main() {

  int inputOne;
  int inputTwo;

  printf("Type a number: \n");
  scanf("%d", &inputOne);
  printf("First number: %d\n\n", inputOne);

  printf("Type a number: \n");
  scanf("%d", &inputTwo);
  printf("Second number: %d\n\n", inputTwo);

  int sum = inputOne + inputTwo;
  printf("The sum of both numbers is: %d", sum);
  return 0;
}
