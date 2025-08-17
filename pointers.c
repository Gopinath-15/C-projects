#include <stdio.h>

int main() {
    int num = 10;     
    int *ptr;          

    ptr = &num;        

    printf("Value of num: %d\n", num);        // Output: 10
    printf("Address of num: %p\n", &num);     // Output: (address of num)
    printf("Value of ptr: %p\n", ptr);        // Output: (address of num)
    printf("Value pointed to by ptr: %d\n", *ptr); // Output: 10

    return 0;
}
