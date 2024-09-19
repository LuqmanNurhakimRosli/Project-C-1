// Pseudo random number
#include <stdio.h>
#include <time.h> //This header file contains functions and macros for manipulating date and time. It provides functions to get the current time, format it, and perform various time-related calculations.
#include  <stdlib.h> //his header file includes functions for performing general utility operations, such as memory allocation, process control, conversions, and others. It is a standard library in C that provides a wide range of functions.

int main() {
   //seed random will pass to current time
   srand(time(0));
   
   //random number can get from 0 to 24 hour
   int num1 = (rand() % 24);
      //random number can get from 0 to 60 minute
     int num2 = (rand() % 60);
     
    // uses %02d to ensure that the hours and minutes are always printed with two digits, adding a leading zero if necessary.
   printf("Time is %02d : %02d", num1, num2);
  
    
    return 0;
}
