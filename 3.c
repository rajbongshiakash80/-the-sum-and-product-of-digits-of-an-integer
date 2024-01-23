#include <stdio.h>

int main() {
    int num, digit, sum = 0, product = 1;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate sum and product of digits
    while (num > 0) {
        digit = num % 10;
        sum += digit;
        product *= digit;
        num /= 10;
    }

    // Output the results
    printf("Sum of digits: %d\n", sum);
    printf("Product of digits: %d\n", product);

    return 0;
}