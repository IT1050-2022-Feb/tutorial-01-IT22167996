/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

// preprocessor directives
#include <stdio.h>

// prototypes of the custom functions
int minimum(int, int);
int maximum(int, int);
int multiply(int, int);

// main function
int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}
// end of main function

// custom function implementation for minimum
int minimum(int num1, int num2) {
  if (num1 > num2) {
    return num2;
  } else {
    return num1;
  }
}
// end of custom funtion

// custom function implementation for maximum
int maximum(int num1, int num2) {
  if (num1 > num2) {
    return num1;
  } else {
    return num2;
  }
}
// end of custom funtion

// custom function implementation for multiply
int multiply(int num1, int num2) {
  return num1 * num2;
}
// end of custom funtion