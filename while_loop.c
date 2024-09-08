#include <stdio.h>
#include <string.h>

//untuk input char name, guna fgets(); name[];, instead scanf();

int main() {

    char name[25];

        printf("Enter your name: ");
        fgets(name, 25 , stdin);
        name[strlen(name) - 1] = '\0';

    while (strlen (name) == 0 ) {

        printf("Enter your name: ");
        fgets(name, 25 , stdin);
        name[strlen(name) - 1] = '\0';

        return 0;
    }

    printf("Welcome %s", name);




    return 0;
}