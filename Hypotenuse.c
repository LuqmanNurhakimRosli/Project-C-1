#include <stdio.h>
#include <math.h>

int main() {

    double a;
    double b;
    double sum;

    printf("Put number A here: \n");
    scanf("%lf\n", &a);
    
    printf("Put number B here: \n");
    scanf("%lf\n", &b);

    sum = sqrt(a*a + b*b);

    printf ("Total is: %lf", sum);
    
    return 0;
}

