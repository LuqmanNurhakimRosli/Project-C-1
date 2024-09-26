// BitWise Operator
#include <stdio.h>

//BITWISE OPERATIONS = special operators used in bit level programming (Knowing binary is important for this topic)
//& = AND 
// | = OR
// ^ = XOR
// << left shift
// >> right shift
// ~ = NOT

int main() {
  
  int a = 60;  // 60 = 0011 1100 in binary
    int b = 13;  // 13 = 0000 1101 in binary
    int result;

    // AND operation
    result = a & b;
    printf("AND operation: %d & %d = %d\n", a, b, result);  // 12 = 0000 1100 in binary

    // OR operation
    result = a | b;
    printf("OR operation: %d | %d = %d\n", a, b, result);  // 61 = 0011 1101 in binary

    // XOR operation
    result = a ^ b;
    printf("XOR operation: %d ^ %d = %d\n", a, b, result);  // 49 = 0011 0001 in binary
    #include <stdio.h>

int main() {
    int a = 60;  // 60 = 0011 1100 in binary
    int b = 13;  // 13 = 0000 1101 in binary
    int result;

    // AND operation
    result = a & b;
    printf("AND operation: %d & %d = %d\n", a, b, result);  // 12 = 0000 1100 in binary

    // OR operation
    result = a | b;
    printf("OR operation: %d | %d = %d\n", a, b, result);  // 61 = 0011 1101 in binary

    // XOR operation
    result = a ^ b;
    printf("XOR operation: %d ^ %d = %d\n", a, b, result);  // 49 = 0011 0001 in binary

    // NOT operation
    result = ~a;
    printf("NOT operation: ~%d = %d\n", a, result);  // -61 = 1100 0011 in binary (two's complement)

    // Left Shift operation
    result = a << 2;
    printf("Left Shift operation: %d << 2 = %d\n", a, result);  // 240 = 1111 0000 in binary

    // Right Shift operation
    result = a >> 2;
    printf("Right Shift operation: %d >> 2 = %d\n", a, result);  // 15 = 0000 1111 in binary

    return 0;
}

  
    return 0;
}
