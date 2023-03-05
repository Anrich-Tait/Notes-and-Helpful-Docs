#include <stdio.h>

int main() {
  int a, b, c;
  printf("Type 3 numbers: ");
  scanf("%d %d %d", &a, &b, &c);

  int max = a;
  
  for (int i = 2; i <= 3; i++) {
    if (max < b) {
      max = b;
    }
    if (max < c) {
      max = c;
    }
  }
  printf("The maxinum of %d, %d, and %d is %d\n", a, b, c, max);
  return 0;
 }
