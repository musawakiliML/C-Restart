// Addition Program
#include <stdio.h>

// Function main begins program execution
int main() {
  /* code */
  int integer1; // first number entered by user
  int integer2; //second number entered by user
  int sum;

  printf("Enter first number:\n");
  scanf("%d", &integer1);

  printf("Enter second number:\n");
  scanf("%d\n", &integer2);

  sum = integer1 + integer2;

  printf("The Sum is %d", sum);

  return 0;
}
