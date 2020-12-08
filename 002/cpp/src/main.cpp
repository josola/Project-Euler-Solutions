//
// main.cpp
// Project Euler Problem 2
//
// Each new term in the Fibonacci sequence is generated by
// adding the previous two terms. By starting with 1 and 2,
// the first 10 terms will be:
// 
// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
//
// By considering the terms in the Fibonacci sequence whose
// values do not exceed four million, find the sum of the
// even-valued terms.
//
// Jordan Sola 2020 - MIT License

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    unsigned int next_term;

    unsigned int term1 = 0;
    unsigned int term2 = 1;

    unsigned int total = 0;

    const unsigned int limit = 4000000;

    while (total < limit)
    {
        // Find next fibonacci number.
        next_term = term1 + term2;

        term1 = term2;
        term2 = next_term;

        // Track even fibonacci numbers.
        if (next_term % 2 == 0)
        {
            total += next_term;
        }
    }

    cout << total << endl;

    return 0;
}