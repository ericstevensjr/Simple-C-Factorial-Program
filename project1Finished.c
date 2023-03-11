#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // User inputs number to be used in factorial equation
    int userInt;
    float userFloat;
    printf("Enter a number to find it's factorial: ")
    // Type checking to see if the inputted number is int, float, or invalid
    // Type checking for integer
    if (scanf(%d, &userInt) == 1) {
        // Number was an integer
        printf("You entered the integer: %d", userInt);
    }
    // Type checking for float
    else if (scanf("%f", &userFloat) == 1) {
        // Number was a float
        printf("You entered the decimal number: %f", userFloat)
    }
    // If neither, return invalid input
    else {
       printf("Invalid input. You must enter a integer or decimal number.")
       return 1;
    }

    /*
    *   Type checking is done. Next is performing calculations on the inputted numbers. Maybe using a
    *       loop to perform as many factorials as the user inputs. Either way, I also want to implement
    *       error catching where the user inputs an invalid value, the program can still work without
    *       stopping.
    */
    return 0;
}
