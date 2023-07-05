#include <stdio.h>

int countEqualDivisors(int n) {
    int count = 0; // Counter for equal divisors

    // Iterate through all possible values of m from 1 to n
    for (int m = 1; m <= n; m++) {
        if (n % m == n / m) {
            count++; // Increment the count if n % m is equal to n / m
        }
    }

    return count;
}

int main() {
    int n; // Input number
    printf("Enter a natural number (1 < n < 150): ");
    scanf("%d", &n);

    // Check if n is valid
    if (n <= 1 || n >= 150) {
        printf("Invalid input for n.\n");
        return 1; // Exit with an error code
    }

    // Calculate and print the number of equal divisors for n
    int result = countEqualDivisors(n);
    printf("Number of equal divisors for %d: %d\n", n, result);

    return 0;
}
