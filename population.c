#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do {
        start = get_int("What is the start population size?\n");
    }
    // If the number is 9 <= then reprompt
    while (start < 9);

    // TODO: Prompt for end size
    int end;
    do {
        end = get_int("What is the end population size?\n");
    }
    // The size can't be smaller than start size
    while (end <= start);


   int dead;
   int born;
   int years = 0;

   // Calculate how many years it takes to reach end population size
    while (start < end){
        years++;
        born = start / 3;
        dead = start / 4;
        start = start + born - dead;
    }
    printf("Years: %d\n", years);
}
