#include <stdio.h>

int add( int a, int b) {
    return a + b;
}

int main () {
    int no1 = 10, no2 = 30, sum;

    sum = add(no1 , no2);
    printf("Result: %d\n", sum);

    return 0;

}