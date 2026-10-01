#include <stdio.h>

int main(void) {
    int num1, num2;
    char op;
    int result = 0;

    printf("enter the calculation : ");
    // 연산자 앞뒤 공백 유무와 상관없이 입력받도록 서식 지정
    scanf("%d %c %d", &num1, &op, &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            break;
    }

    return 0;
}