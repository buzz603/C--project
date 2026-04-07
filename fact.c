#include <stdio.h>

void factorial() {
    int n;
    unsigned long long fact = 1;
    printf("\n\nEnter an integer: ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (int i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    //return 0;
}


