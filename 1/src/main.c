/*
main.c
project euler problem #1
Jordan Sola 2020
*/

#include <stdio.h>

int main()
{
    int total = 8;
    for (int i = 6; i < 1000; i++)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            total += i;
        }
    }
    printf("%d", total);
    return 0;
}