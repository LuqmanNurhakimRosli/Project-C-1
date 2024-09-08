#include <stdio.h>
#include <string.h>

//untuk input char name, guna fgets(); name[];, instead scanf()
//fgets() is function used to read string from input stream
//stdin is the standard input stream, typically the keyboard.
//When the user types their name and presses Enter, fgets() reads the input, including the newline character ('\n') added when the user hits Enter.

//strlen(name) calculates the length of the string stored in the name array.
//strlen(name) - 1 gives the index of the last character in the string, which is the newline character ('\n').
// name[strlen(name) - 1] = '\0'; replaces this newline character with the null terminator ('\0').
//This step effectively removes the newline character from the input, so that when the name is printed later, it does not include an unwanted newline at the end.

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