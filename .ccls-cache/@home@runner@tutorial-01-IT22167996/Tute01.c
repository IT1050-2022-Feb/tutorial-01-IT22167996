/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

// preprocessor directives
#include <stdio.h>

// main function
int main() { 
  // varibales
  double mark1, mark2, avg = 0.0;

  // input marks
  printf("Enter the marks : \n");
  scanf("%lf%lf", &mark1, &mark2);

  // calculate the average
  avg = (mark1 + mark2) / 2;

  // display the average
  printf("Average : %.2f\n", avg);
  
  // signifying the successful execution of the program
  return 0; 
}
// end of main function
