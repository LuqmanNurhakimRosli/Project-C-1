#include <stdio.h>
//continue = skips rests of code & forces the next iteration of loop
//break = exist a loop / switch

int main() {
   
    
    for ( int i = 0;  i <= 20; i++)
    {
        if ( i == 10) 
        {
            break; // or continue
        }
        printf("%d\n", i);
    }
    
    return 0;
}
