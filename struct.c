#include <stdio.h>
#include <string.h>

// struct = collection of related members ("variables")
//          they can be different data types
//          listed under one name in a block of memory
//          VERY SIMILAR to classes in other languages (but no methods)

struct Game {
    char name[50];
    double rating;
}; // Missing semicolon

int main() {
    struct Game game1;
    struct Game game2;

    strcpy(game1.name, "Star Wars");
    game1.rating = 8.9;
    strcpy(game2.name, "NBA Star");
    game2.rating = 7.1; // Corrected to game2.rating

    printf("Game 1 name: %s\n", game1.name);
    printf("Game 1 rating: %.2f\n", game1.rating); // Corrected format specifier

    printf("Game 2 name: %s\n", game2.name);
    printf("Game 2 rating: %.2f\n", game2.rating); // Corrected format specifier

    return 0;
}
