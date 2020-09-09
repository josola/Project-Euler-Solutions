/*
main.c
project euler problem 007
Jordan Sola 2020
*/

#include <stdio.h>
#include "prime.h"

int main()
{
    int target_prime = 0;
    int prime_count = 0;

    while (prime_count != 10001)
    {
        target_prime++;
        if (IsPrime(target_prime))
        {
            prime_count++;
        }
        printf("%d %d\n", prime_count, target_prime);
    }

    return 0;
}