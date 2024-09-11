// Array of string
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    
    char car [] [10] = {"Myvi", "Tesla", "Perodua"};
    
    int leng = sizeof(car)/sizeof(car[0]);
    
    strcpy(car[0], "Tesla");    //set 0 jadi tesla
    
    for ( int i=0; i <= leng; i++)
    {
        printf("%s\n", car[i]);
    }
    

    return 0;
}
