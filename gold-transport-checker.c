#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  
    
    while (T--) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);
        
        int total_capacity = (N + 1) * Y;  
        
        if (X <= total_capacity) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
