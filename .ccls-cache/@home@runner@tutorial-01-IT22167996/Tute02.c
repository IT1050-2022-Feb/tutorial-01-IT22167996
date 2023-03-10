/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

// preprocessor directives
#include <stdio.h>

// main function
int main(void) {
  // variables
  int distance, amount, remaining_distance;

  // input distance
  printf("Distance -> ");
  scanf("%d", &distance);
  
  // conditionally checking the distance
  if (distance > 30) {
    // option for the distance greater than 30km

    // calculate the remaining distance
    remaining_distance = distance - 30;

    // calculate the total amount
    amount = (30 * 50) + (remaining_distance * 40);

    // displaying the total amount
    printf("Amount = 30  x 50 + (%d - 30) x 40 = %d\n", distance, amount);
  } else {
    // option for the distance less than 30km

    // calculate the total amount
    amount = 30 * distance;

    // displaying the total amount
    printf("Amount = %d  x 50 = %d\n", distance, amount);
  }

  // successful execution of the program
  return 0;
}
// end of main function