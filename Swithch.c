#include <stdio.h>

int main() {

    //switch = more efficient alternative to using many "else if" statements
    //         allow value to be tested for equality against many cases

    char grade;

    printf("Enter your grade: ");
    scanf ("%c", &grade);

    switch (grade) {
        case 'A':
            printf ("Perfect!");
            break;
        case 'B':
            printf ("Good!");
            break;
        case 'C':
            printf ("Perfect!");
            break;
        case 'D':
            printf ("Nice Try!");
            break;
        default:
            printf("Please Enter your valif grade.");
        
    }
}