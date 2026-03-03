// Worksheet 2.5

/* 
 * Task 1.1 - Practice
 * Using for loop to print all prime numbers from 1 to 100.
 * recall that a prime number is a natural number greater than 1
 * and completely only divisible by 1 and itself.
 */

#include <stdio.h>

int main(void) {

    for (int n = 2; n <= 100; n++) {
        int isPrime = 1;

        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d\n", n);
        }
    }

    return 0;
}