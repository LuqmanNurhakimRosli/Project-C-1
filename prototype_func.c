#include <stdio.h>

//prototype function identity
void identity( char [] , int);

int main() {

    char name [] = "Luqman";
    int age = 20;

    identity(name, age) ;


    return 0;
}

void identity(char name[] , int age){

    printf("Hello %s\n", name);
    printf("You are %d\n", age);


}

// function prototype
// function declaration w/o body , before main()
// Ensure that calls to function are made with correct arguement

// IMPORTANT NOTES
// Many C compiler not check for parameter matching
// Missing arguement will result in unexpected behaviour
// A function prototype causes the compiler to flag an error if arguement are misssing

// ADVANTAGES
// 1. Easier to navigate a program w/ main() at top
// 2. HElp with debugging
// 3. Commonly used in header files