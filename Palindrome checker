#include <stdio.h>
#include <string.h>


void reverseString(char s[]) {
    int start = 0;
    int end = strlen(s) - 1;

    while (start < end) {
        
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        
        start++;
        end--;
    }
}

int main() {
    char s[100];  
    printf("Enter a text or number: ");
    scanf("%s", s);  

    
    char reversed[100];
    strcpy(reversed, s);  

   
    reverseString(reversed);

    
    if (strcmp(s, reversed) == 0) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}
