//Swap values of two variables
#include <stdio.h>
#include <string.h>

int main() {
    //kene cipta temp untuk simpan sementara vair lain
    
    char x [15]= "Jambu";
    char y [15]= "Epal";
    char temp[15]; // untuk store var temporary
    
    //untuk simple variable
    /*temp = x;
    x = y;
    y= temp;*/
    
    
    //dalm string array variable
    strcpy(temp, x); //temp copy x
    strcpy( x, y); // x copy y
    strcpy( y , temp); //y copy temp
    
    printf("x = %s\n", x);
    printf("y = %s\n", y);
    
    
    return 0;
}
