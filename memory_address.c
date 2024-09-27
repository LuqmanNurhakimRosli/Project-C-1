// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //mmeory = an array of bytes within RAM (street)
    //memory block = a single unit (byte) within memmory, used to hold some value (oerson)
    //memorty address = the address of where a memory block is located (house address)
    
    char a;
    double b[3];
    
    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof (b));
    
    printf("%p\n", &a);
    printf("%p\n",&b);
    
    
    return 0;
}
