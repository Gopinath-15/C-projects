#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int arr[50][50]; 
    printf("Enter %d elements:\n", n * n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    int p = 1; 
    int p1 = 1; 
    for (int i = 0; i < n; i++) {
        p *= arr[i][i]; 
        p1 *= arr[i][n - 1 - i]; 
    }

    printf("Sum of diagonal products: %d\n", p + p1);
    return 0;
}
