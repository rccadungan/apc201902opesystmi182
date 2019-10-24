/*
 * Compare two user input number whether it's bigger or smaller (numberComparing.$
 */
#include <stdio.h>

int main() {
   int number1, number2;

   // Prompt user for numbers
   printf("Enter your first number: "); //prompt the user enter first number
   scanf("%d", &number1);   // Use %d to read an int

   printf("Enter your second number: "); //prompt the user enter second number
   scanf("%d", &number2);   // Use %d to read an int

      if (number1  > number2 ) {  //
        printf("First number is bigger than the second number.");
      }
      else {
        printf("Second number is bigger than the first number.");
      }
    printf("\n");
   return 0;
}
