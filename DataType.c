#include <stdio.h>
//for boolean
#include <stdbool.h>

int main() {
//(%d = decimal, %c character, 1 byte = simpan 1 bende)
    char a = 'c';                   // single character %c
    char b[] = "Luqman Nurhakim";  //array of characters %s

    float c = 3.141592;             // 4 bytes (32 bits of precision) 6-7 digits %f
    float d = 3.14159293203840281;  // 8 bytes (64 bits of precision) 15 - 16 digits %1f
    
    bool e = true;                   //1 byte (true or false) %d

    char f = 120;                    //1 byte (-128 to +127) %d or %c
    unsigned char g = 255;           //1 byte (0 to + 255) %d or %%c

    short int h = 32324;             //2 byte (-32,768 to +32,767) %d 
    unsigned short int i = 653633;   //2 byte (0 to +65,535) %d

    int j = 2147483647;              //8 byte (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 4294294295;     //8 byte (0 to +4,294,967,295) %d

    long long int l = 9218028109820918230810;       //QUADRILION %llu
    unsigned long long m = 12192818201801210210210; //QUADRILION %llu






}