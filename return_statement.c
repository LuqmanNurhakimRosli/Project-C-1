#include <stdio.h>

double circle ( double x, double y) {

    double result = ( x + y) * 1;
    return result;

}



int main() {

    double no1;
    double no2;

    printf("What is No1?\n");
    scanf("%lf", &no1);
    printf("What is No2?\n");
    scanf("%lf", &no2);

    double z = circle ( no1 , no2);
    printf("%.2lf", z);
    

    return 0;
}