#include <stdio.h>

void identity (char name[], float cgpa ) {
    
    printf("My name is %s!\n", name);
    printf("My CGPA is %.2f!",cgpa);

}





int main() {

    char name[] = "Luqman ";
    float cgpa = 3.99;
    
    identity (name, cgpa);

    return 0;
}