#include <stdio.h>

void identity (char name[], float cgpa ) {
    
    printf("My name is %s!\n", name);
    printf("My CGPA is %.2f!",cgpa);

}





int main() {

    char name[25];
    float cgpa;

    printf("What is your Name?\n");
    scanf("%s", &name);
    printf("What is your CGPA?\n");
    scanf("%f\n", &cgpa);
    
    identity (name, cgpa);

    return 0;
}