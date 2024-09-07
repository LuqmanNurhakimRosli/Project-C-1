#include <stdio.h>
#include <string.h> // fucntion to manipulating strings ( array of characters)

// void string0 (char string1[], char string2[]);

int main() {

    char string1[] = "Luqman";
    char string2[] = "Nurhakim";

    // strlwr(string1);               //converts to lowercast     
    // strupr(string1);               //converts to uppercast
    // strcat(string1, string2);      //Link together the string string2 to the end of the string string1.
    // strncat(string1, string2, 1);   //Link together n charcters from str2 to str1
    // strcpy(string1, string2);      //Copies the string string2 to the string string1.
    // strcpy(string1, string2, 2);   //copy n char of string2 to string2

    // strset(string1, '?');          //sets all characters of string to given characters
    // strset(string1, 'x', 1);       //set first n characters of a string to given characters
    // strrev(string1);               //rverse string

    // int result = strlen(string1);                 //return string length as int
    //int result = strcmp(string1, string2);        //string compare all char
    //int result = strcmp(string1, string2, 1);     //string compare n char
    int result = strcmpi(string1, string2);       //string compare all (ignore case)
    //int result = stricmp(string1, string2, 1);    //string compare n charters(ignore case)


printf("%d", result);

if(result == 0) {

    printf("These strings are same!");
}
else {
    printf("These strings are not same");
}

// string0(string1, string2);


    return 0;
}

// void string0 (char string1[], char string2[] ){

//     return (result == true) ? printf("These strings are same!") : printf("These strings are not same");
// }