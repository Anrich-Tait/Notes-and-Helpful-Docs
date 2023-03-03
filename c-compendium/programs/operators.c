// Purpose: To make use of the different operators (all in one program):

#include <stdio.h>

int main() {
  //Arithmetic operators:
  int x = 15;
  int y = 3;
  int z = 2;
  printf("This is x: %i\n", x);
  printf("This is y: %i\n", y);
  printf("This is z: %i\n", z);

  //Addition:
  int sum = x + y + z;
  printf("This is the sum of x, y and z: %i\n", sum);

  //Subtraction:
  int sub = x - y -z;
  printf("y - z -x = %i\n", sub);

  //Mulitplication:
  int multi = x * y * z;
  printf("x * y * z = %i\n", multi);

  //Division:
  int div = x / y /z;
  printf("y / z / x = %d\n", div);

  //Assignment Operators:
  // '='
  int a = x;
  printf("a is now equal to x: %i\n", a);

  // '+='
  a += 5;
  printf("a is now equal to (+5): %i\n", a);

  // '-='
  a -= 5;
  printf("a is now equal to (-5): %i\n", a);

  // '*='
  a *= 5;
  printf("a is now equal to (*a): %i\n", a);

  // '/='
  a /= 5;
  printf("a is now equal to (/a): %i\n", a);

  //Comparison operators:
  



  return 0;
}
