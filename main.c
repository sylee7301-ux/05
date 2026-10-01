#include <stdio.h>

int main(void) {
    int num;

    printf("Input an integer: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Positive number.\n");
    } else if (num < 0) {
        printf("Negative number.\n");
    } else {
        printf("It is 0.\n");
    }

    return 0;
}