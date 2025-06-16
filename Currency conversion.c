#include <stdio.h>

int main() {
    float amount, converted_amount;
    int from, to;
    float rate[] = {1.0, 0.92, 83.52, 157.56, 0.79};

    printf("1. USD\n2. EUR\n3. INR\n4. JPY\n5. GBP\n");

    printf("Enter amount: ");
    scanf("%f", &amount);

    printf("From (1-5): ");
    scanf("%d", &from);

    printf("To (1-5): ");
    scanf("%d", &to);

    if(from < 1 || from > 5 || to < 1 || to > 5) {
        printf("Invalid choice\n");
        return 1;
    }

    converted_amount = amount * rate[to-1] / rate[from-1];

    printf("Converted amount: %.2f\n", converted_amount);

    return 0;
}
