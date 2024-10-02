// Online C compiler to run C program online
#include <stdio.h>

//Create own text file use c
int main() {

    FILE *pF = fopen("test.txt", "w");
    
    fprintf(pF, "Luqman Nurhakim");
    
    fclose(pF);

    return 0;
    
    if (remove("test.txt") == 0)
    {
        printf("That file is deleted!");
    }
    else
    {
        printf("This file is not deleted!");
    }
    
    
        return 0;

}
