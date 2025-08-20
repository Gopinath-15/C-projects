#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    int results[T];  
    for (int t = 0; t < T; t++) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);

        char S[1005];
        scanf("%s", S);

        int has0 = 0, has1 = 0;
        for (int i = 0; i < N; i++) {
            if (S[i] == '0') has0 = 1;
            if (S[i] == '1') has1 = 1;
        }

        if (has0 && has1) {
            
            results[t] = (X < Y) ? X : Y;
        } else {
            
            results[t] = 0;
        }
    }

   
    for (int t = 0; t < T; t++) {
        printf("%d\n", results[t]);
    }

    return 0;
}
