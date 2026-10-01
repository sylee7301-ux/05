#include <stdio.h>

int main(void) {
    int num;
    int abs_val;

    printf("Input an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        abs_val = -num;
    } else {
        abs_val = num;
    }

    printf("The absolute value is %d.\n", abs_val);

    return 0;
}