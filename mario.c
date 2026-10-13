#include <cs50.h>
#include <stdio.h>

int main(void)
{

    void printing_spaces(int NumOfSpaces);

    int height;
    int i = 0;

    //validation
    do
    {
        height = get_int("Height: ");
    }
    while (height<1 || height>8);

    //for each row
    for (int row = 0; row<height ; row++)
    {
        //for each column
        printing_spaces(height-1-row);

        for (int index = 0; index<=row; index++)
        {
            printf("#");
        }
        printf("\n");
    }
}

void printing_spaces(int NumOfSpaces)
{
    for (int index = 0; index < NumOfSpaces; index++)
    {
       printf(" ");
    }
}
