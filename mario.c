#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

// Input for pyramid height
int h;

do {
    h = get_int("Please enter the height: ");
}
while (h > 8 || h < 1);

// Array for blocks
char b[] = "########";
char pyramid[8];


for(int i = 0; i < h; i++){
    // Conotates the arrays
    strncat(pyramid, b, 1);
    // Prints the pyramid
    printf("%12s   %s\n", pyramid, pyramid );
}


}