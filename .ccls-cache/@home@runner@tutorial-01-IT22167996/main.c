/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

// preprocessor directives
#include <stdio.h>

// main function
int main() {
  // variables
  int n, total, x = 1;
  
  // taking input for 'n'
  printf("n -> ");
  scanf("%d", &n);

  printf("sum = ");
  
  // loop to keep the program running till it stops when needed
  do {
    total += x;
    printf("+%d", x);
    x++;
  } while (n >= x);
  
  // displaying the output
  printf(" = %d\n", total);
  
  // signifying successful program execution
  return 0;
}
// end of main function
