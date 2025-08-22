#include <stdio.h>

int main() {
    const char *names[] = {"Alice", "Bob", "Charlie", "Dana"};
    int num_names = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < num_names; i++) {
        printf("Name %d: %s\n", i + 1, names[i]);
    }

    return 0;
}
