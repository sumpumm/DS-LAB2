#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to find the greatest common divisor of two numbers
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

// Function to find the modular multiplicative inverse of a number
int modInverse(int a, int m)
{
    int m0 = m;
    int y = 0, x = 1;

    if (m == 1)
        return 0;

    while (a > 1)
    {
        int q = a / m;
        int t = m;

        m = a % m, a = t;
        t = y;

        y = x - q * y;
        x = t;
    }

    if (x < 0)
        x += m0;

    return x;
}

// Function to find the solution to the linear congruence equation
int solveLinearCongruence(int a, int b, int m)
{
    int g = gcd(a, m);

    if (b % g != 0)
        return -1;

    int x = (modInverse(a / g, m / g) * b / g) % m;
    return x;
}

int main()
{
    int a, b, m;

    
    printf("Enter the values of a, b, and m: ");
    scanf("%d %d %d", &a, &b, &m);

    // Find solution to linear congruence equation
    int x = solveLinearCongruence(a, b, m);

    
    if (x == -1)
        printf("No solution exists.\n");
    else
        printf("x = %d\n", x);

    return 0;
}

