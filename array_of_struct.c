// array of struct
#include <stdio.h>

struct Profile 
{
    char name[50];
    int age;
};

int main() {
    
    struct Profile soldier[3] = 
    {
        {"ALi", 24},{"Abu", 29}, {"Jaguh", 30}
    };

    for ( int i =0; i < (sizeof(soldier)/sizeof(soldier[0])); i++)
    {
        printf("Name: %s || Age: %d\n", soldier[i].name, soldier[i].age);
    }

    return 0;
}
