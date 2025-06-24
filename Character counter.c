#include <stdio.h>
#include <string.h>

int main() {
    char text[1000];
    int digits = 0, alphabets = 0, special = 0, i;

    printf("Enter your text: ");
    fgets(text, sizeof(text), stdin);


    if (text[strlen(text) - 1] == '\n') {
        text[strlen(text) - 1] = '\0';
    }


    for (i = 0; text[i] != '\0'; i++) {
        if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z')) {
            alphabets++;
        } else if (text[i] >= '0' && text[i] <= '9') {
            digits++;
        } else {
            special++;
        }
    }


    printf("\nNumber of digits: %d\n", digits);
    printf("Number of alphabets: %d\n", alphabets);
    printf("Number of special characters: %d\n", special);

    return 0;
}
