#include <stdio.h>

int main() {
    int t, n;
    char result[1000];
    scanf("%d", &t);  // number of test cases

    for (int k = 0; k < t; k++) {
        scanf("%d", &n);  // height of pyramid

        for (int i = 1; i <= n; i++) {
            // print spaces
            for (int j = 1; j <= n - i; j++)
                printf(" ");
            // print stars
            for (int j = 1; j <= (2 * i - 1); j++)
                printf("*");
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
