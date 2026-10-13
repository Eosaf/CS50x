#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Function prototype
    void print_row(int num);
    void print_spaces(int num);

    //Asking + Validating for height
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height<=0 || height>8);

    //Print pyramid height
    //if "i" is set to 0 -> 1st row empty
    for (int i = 1; i<=height; i++)
    {
        //Print pyrmaid rows using a function
        print_spaces(height-i);
        print_row(i);
        printf("  ");
        print_row(i);
        printf("\n");
    }
}

//Row function creation continued
void print_row(int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("#");
    }
}

//Space function creation continued
void print_spaces(int num)
{
    for (int i = 1; i<=num; i++)
    {
        printf(" ");
    }
}

