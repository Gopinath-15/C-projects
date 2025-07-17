#include <stdio.h>

int main()
{
    int num;
    int a, b, c, d;
    int sum = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    a = num / 10;    // a = 153 / 10 = 15
    b = num % 10;    // b = last digit = 3
    sum += b * b * b;

    c = a % 10;      // c = 15 % 10 = 5
    sum += c * c * c;

    d = a / 10;      // d = 15 / 10 = 1
    sum += d * d * d;

    printf("Sum of cubes: %d\n", sum);

    if (num == sum)
    {
        printf("The number is an Armstrong number.\n");
    }
    else
    {
        printf("Not an Armstrong number.\n");
    }

    return 0;
}
