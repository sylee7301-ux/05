#include <stdio.h>

int main(void) {
    int n;
    int sum = 0;

    printf("Input a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("The result is %d\n", sum);

    return 0;
}