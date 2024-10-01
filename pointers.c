//Pointers
#include <stdio.h>

int main() {
    // A pointer is a variable that stores the memory address of another variable. Instead of holding a data value, a pointer holds the address where the data is stored

    int var = 42;
    int *ptr = &var;
    
    printf("Value of var: %d\n",var);
    
    printf("Address of var: %p\n", &var);
    
    printf("Address storred in ptr: %p\n", ptr);
    
    printf("Value pointed to by ptr: %d\n", *ptr);
    
    return 0;
}
