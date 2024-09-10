#include <stdio.h>

int main() {
   
   // 2D (two dimensional) = array, which element in entire array
   //       useful if need a matrix, grid or table of data
    
    // [2] = ada 2 array, [3] = ada 3 attributes dlm array
    // 
    // Cara 1
    /*int numbers [2] [3] = {
                            {1,2,3},
                            {4,5,6}
                          };*/
    // cara 2                      
    int numbers[3][3];
    
    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;


                          
    
                          
    int rows = sizeof(numbers)/ sizeof(numbers[0]);              
    int columns = sizeof(numbers[0])/ sizeof(numbers[0][0]);
    
    printf("rows: %d\n", rows);
    printf("columns: %d\n", columns);
                          
    for (int i = 0; i < rows; i++)
    {
        for (int j =0; j < columns; j++)
        {
            printf("%d ", numbers [i] [j]);
        }
        printf("\n"); //new line
    }
    
    return 0;
}
