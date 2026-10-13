#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

//argc - count of arguments entered
//argv - array containing data entered
//argv[0] = file_name
//argc = 1 ----> Default
int main(int argc, string argv[])
{
    //Prototype function
    char rotate(char letter, int key);

    //if no arguments entered // More than one
    if (argc<=1 || argc>2)
    {
        printf("Usage: ./caesar key \n");
        return 1;
    }
    //continue if a single argument is entered
    for (int i=0, length = strlen(argv[1]); i<length; i++)
    {
        //check if 1st index in array is a number or not
        if ( !isdigit(argv[1][i]) )
        {
            printf("Usage: ./caesar key \n");
            return 1;
        }
        //If first element is a num, continue to see if positive
        if ( atoi(argv[1]) < 1 )
        {
            printf("Usage: ./caesar key \n");
            return 1;
        }
    }
    //Now its all +ve digits, convert string to int
    int key = atoi(argv[1]);

    //Getting plaintext from user
    string plaintext = get_string("plaintext: ");

    //Encrypting text from user
    for (int i=0, length = strlen(plaintext); i<length; i++)
    {
        plaintext[i] = rotate(plaintext[i], key);
    }
    printf("ciphertext: %s\n", plaintext);
    return 0;
}

//Function continued

//Encryption, shift each alphabet by key
//Uppercase, numbers, punctuation no change
char rotate(char letter, int key)
{
    //If its a letter
    if ( isalpha(letter) )
    {
        //If its uppercase
        if (isupper(letter))
        {
           char new = (((letter-65)+key)%26)+65;
           return new;
        }
        //If its lowercase
        else
        {
            char newer = (((letter-97)+key)%26)+97;
            return newer;
        }
    }
    else
    {
        return letter;
    }

}
