/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark2,mark1,sum;
  float avg;
  printf("Input sub 1 mork : ");
  scanf("%d", &mark1);
  printf("Input sub 1 mork : ");
  scanf("%d", &mark2);

  //Calculations
  sum = mark1 + mark2;
  avg = sum/2.0;

  printf("Average of the two marks : %.2f", avg);

  
  return 0;
}

