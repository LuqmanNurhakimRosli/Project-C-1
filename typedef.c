//typedef = reserved keyword that given existing datatype a "nickname"
#include <stdio.h>

typedef struct 
{
    char name[50];
    int age;
}Profile;

int main() {
    
    Profile p1 = {"Luqman", 20};
    Profile p2 = {"Nurhakim", 21};
    
    printf("%s\n",p1.name);
    printf("%d\n",p1.age);
    printf("%s\n",p2.name);
    printf("%d",p2.age);
    

    return 0;
}
