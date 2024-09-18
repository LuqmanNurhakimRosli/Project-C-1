// enums = a way to define a set of named integer constants. They make your code more readable and maintainable by giving meaningful names to these constants. 
#include <stdio.h>

enum Day {Sun=1, MOn, Tue, Wed, Thu, Fri, Sat};

int main() {
    
    enum Day today;
    today = Sat;
    
    if(today == Sun || today == Sat)
    {
        printf("Cuti umum");
    }
    else{
        printf("Waktu sekolah");
    }
    
    
    return 0;
}
