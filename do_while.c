#include <stdio.h>

int main() {

    int number = 0Z;
    int sum = 0;

do{
    printf("Enter number: ");
    scanf("%d", &number);

        if ( number > 0) {
            sum+=number;
        }


} while (number > 0);

printf("\nResult: %d", sum);

    return 0;
}