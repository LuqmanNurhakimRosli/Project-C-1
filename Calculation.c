#include <stdio.h>

int main () {

    char operation;
    double no1;
    double no2;
    double result;

    printf("Enter your operation (+ - * /): ");
    scanf("%c", &operation);
    
    printf("ENter n1: ");
    scanf("%lf", &no1);
    printf("ENter n2: ");
    scanf("%lf", &no2);

    switch (operation){
        case '+':
            result = no1 + no2;
            printf("\nresult: %.1lf", result);
            break;

        case '-':
            result = no1 - no2;
            printf("\nresult: %.1lf", result);
            break;

        case '*':
            result = no1 * no2;
            printf("\nresult: %.1lf", result);
            break;

        case '/':
            result = no1 / no2;
            printf("\nresult: %.2lf", result);
            break;

        default:
            printf("%c is not valid", operation);
    }


    return 0;
}