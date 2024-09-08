#include <stdio.h>

//nested loop = a loop inside another loop
//can use either for or while loop
//start inner loop (for loop j) before the outer loop

int main() {

    int row;
    int column;
    char symbol;

    printf("\nEnter # of rows: ");
    scanf("%d", &row);

    printf("Enter # of columns: ");
    scanf("%d", &column);

    scanf("%c"); // This is to consume the newline character left by the previous scanf calls.

    printf("Enter symbol to use: ");
    scanf("%c", &symbol);

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= column; j++) {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}
