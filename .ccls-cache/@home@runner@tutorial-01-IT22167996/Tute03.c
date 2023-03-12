/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 10
sum = 1+2+3+...+10 = 55 */

// preprocessor directives
#include <stdio.h>

// main function
int main() {
  // variables
  int i, n, total = 0;
  
  // taking input for 'n'
  printf("n -> ");
  scanf("%d", &n);

  printf("sum = ");

  // displaying the output
  printf("sum = ");
  for (i = 1; i <= n; i++) {
      total += i;
      printf("%d", i);

      if (i != n) {
          printf("+");
      }
  }
  printf(" = %d\n", total);
  
  // signifying successful program execution
  return 0;
}
// end of main function
