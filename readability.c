#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    //Prompting user
    string text = get_string("Text: ");

    //Function prototypes
    int LetterCount(string text);
    int WordCount(string text);
    int SentenceCount(string text);

    //Counting the variables
    int letters = LetterCount(text);
    int words = WordCount(text);
    int sentences = SentenceCount(text);
    //printf("Letters %i, words %i, sentences %i\n", letters,words,sentences);

    //Coleman-Liau index

    //Average number of letters per 100 words
    float L = ((float) letters/words)*100;

    //Average number of sentences per 100 words
    float S = ((float) sentences/words)*100;

    float index = (0.0588 * L - 0.296 * S - 15.8);

    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %.0f\n", round(index) );
    }


}



//Prototypes continued
//1- Counting Letters
int LetterCount(string text)
{
    //Initialising counter
    int count_letters = 0;

    //Counting letters
    for (int i=0, length=strlen(text); i<length; i++)
    {

        if ( isalpha(text[i]) )
        {
            count_letters+=1;
        }
    }
    return count_letters;
}


//2- Counting Words
int WordCount(string text)
{
    //Counter
    int count_words = 1;

    for (int i=0, length=strlen(text); i<length; i++)
    {
        if ( text[i]==' ')
        {
            count_words+=1;
        }
    }
    return count_words;
}


//3- Counting Sentences
int SentenceCount(string text)
{
    //Counter
    int count_sentences = 0;

    for (int i=0, length=strlen(text); i<length; i++)
    {
        if (text[i]=='!' || text[i]=='.' || text[i]=='?' )
        {
            count_sentences+=1;
        }
    }
    return count_sentences;
}


