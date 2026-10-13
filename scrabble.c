#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{

    string p1 = get_string("Player 1: ");
    string p2 = get_string("Player 2: ");

    //protoype function
    int CalculateScore(string word);

    //Comparing scores
    int ScorePlayer1 = CalculateScore(p1);
    int ScorePlayer2 = CalculateScore(p2);

    if (ScorePlayer1 > ScorePlayer2)
    {
        printf("Player 1 wins!\n");
    }
    else if (ScorePlayer1 < ScorePlayer2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

}

//Continuation of the function
int CalculateScore(string word)
{
    //Array of points for each char of alphabet, index = alphabet
    //Where array starts from element 0 not 1
    int scores[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    int points = 0;

    for (int i = 0, length=strlen(word); i < length; i++)
    {
        //Convert the word to upper case
        //Subtract by 1 to get index of char to get score
        //Checking if its not a symbol, else do nothing
        if ( (toupper(word[i]) - 'A') <= 26 && (toupper(word[i]) - 'A') >= 0 )
        {
            points = points + scores[(toupper(word[i]) - 'A')];
        }
    }
    return points;
}
