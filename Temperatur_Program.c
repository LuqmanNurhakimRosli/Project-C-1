#include <stdio.h>
#include <ctype.h> // and to convert between uppercase and lowercase.

int main() {

    char unit;
    float temp;

    printf("What temperature is used (F) or (C): ");
    scanf ("%c", &unit);

    unit = toupper(unit); // huruh input kecil jadi besar c -> C

    if (unit == 'C') {
        printf("\nEnter temp in Celcius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32 ;
        printf("The temp in Celc is : %f", temp);
    }
    else if (unit == 'F') {
        printf("\nEnter temp in Farenhiet: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 10 ;
        printf("The temp in Faren is : %f", temp);
    }
    else {
        printf (" The '%c' is Wrong Unit Temperature!", unit);
    }

    return 0;
}