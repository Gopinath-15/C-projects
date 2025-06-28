#include<stdio.h>
#include<string.h>

int main() {
    char a[100];
    printf("Enter the string to reverse: ");
    scanf("%s", a);

    int n = strlen(a);

    printf("Reversed string: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%c", a[i]);
    }
    printf("\n"); 
}
