#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input
    string word1 = get_string("Player 1: ");
    // Score the word
    int score1 = compute_score(word1);

    // Get input
    string word2 = get_string("Player 2: ");
    // Score the word
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2) {
        printf("Player 1 Wins with %i points!", score1);
    }
    else if (score1 < score2) {
        printf("Player 2 Wins with %i points!", score2);
    }
    else {
        printf("It's a Draw!");
    }
}

int compute_score(string word)
{
    int sc = 0;

    // TODO: Compute and return score for string
    for (int i = 0; i < strlen(word); i++) {
        word[i] = toupper(word[i]);
        int s = word[i] - 65;
        sc = sc + POINTS[s];
    }
    return sc;
}
