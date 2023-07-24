#include "diamonds.h"
#include <stdio.h>
#include <ctype.h>


int main(void) {
    char inputLetter;

    printf("Enter a letter (A-Z): ");
    scanf(" %c", &inputLetter);

    // Convert the input letter to uppercase to handle lowercase inputs
    inputLetter = toupper(inputLetter);

    // Call the draw_diamond function with the input letter
    draw_diamond(inputLetter);

    return 0;
}
