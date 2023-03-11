#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int fact1 = 1;
    int fact2;
    int fact3;
    int fact4;
    int fact5;
    int fact6;
    int fact7;

    fact2 = (fact1 * 2);
    fact3 = (fact2 * 3);
    fact4 = (fact3 * 4);
    fact5 = (fact4 * 5);
    fact6 = (fact5 * 6);
    fact7 = (fact6 * 7);

    printf("Factorial of 1 is: %d\n", fact1);
    printf("Factorial of 2 is: %d\n", fact2);
    printf("Factorial of 3 is: %d\n", fact3);
    printf("Factorial of 4 is: %d\n", fact4);
    printf("Factorial of 5 is: %d\n", fact5);
    printf("Factorial of 6 is: %d\n", fact6);
    printf("Factorial of 7 is: %d\n", fact7);

    return 0;
}
