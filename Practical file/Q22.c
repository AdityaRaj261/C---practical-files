#include <stdio.h>

int main() {
   int marks[5], i, total = 0;
   float average, percentage;

   printf("Enter marks of five subjects: \n");
   for (i = 0; i < 5; i++) {
      scanf("%d", &marks[i]);
      total += marks[i];
   }

   average = total / 5.0;
   percentage = (total / 500.0) * 100;

   printf("Total Marks = %d\n", total);
   printf("Average Marks = %.2f\n", average);
   printf("Percentage = %.2f\n", percentage);

   return 0;
}