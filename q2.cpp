#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_LEN 32

// Function to convert decimal to binary
void decimalToBinary(int n, char binary[])
{
    int i = 0;
    while (n > 0)
    {
        binary[i] = n % 2 + '0';
        n = n / 2;
        i++;
    }
    binary[i] = '\0';

    // Reverse the string
    int j = 0, k = strlen(binary) - 1;
    while (j < k)
    {
        char temp = binary[j];
        binary[j] = binary[k];
        binary[k] = temp;
        j++;
        k--;
    }
}

int main()
{
    int a, b;
    int sum, product, quotient;
    char binarySum[MAX_LEN];
    char binaryProduct[MAX_LEN];
    char binaryQuotient[MAX_LEN];

    
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    
    sum = a + b;
    
    product = a * b;
    
    quotient = a / b;

    // Convert results to binary and store in strings
    decimalToBinary(sum, binarySum);
    decimalToBinary(product, binaryProduct);
    decimalToBinary(quotient, binaryQuotient);


    printf("Sum: %d (Decimal) / %s (Binary)\n", sum, binarySum);
    printf("Product: %d (Decimal) / %s (Binary)\n", product, binaryProduct);
    printf("Quotient: %d (Decimal) / %s (Binary)\n", quotient, binaryQuotient);

    return 0;
}

