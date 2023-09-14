#include <cs50.h>
#include <stdio.h>


// function to get valid number -If the user enters an even number, display an error message and ask them to input an odd number.
int validNum () {
    int num = get_int("Odd Number: \n");
    printf("You chose %d\n",num);
    return num;
}
// function with loop to make diamond -Generate the diamond pattern using asterisks (*) or any other character of your choice.

int printThree(int validNum) {
    for(int i = 0; i < 3; i++) {
        printf("*");
    } 
    return 3;
}

void printStack(int n) {
    for(int i =0; i < n; i++) {
        printThree(3);
        printf("\n");
    }
}
    
int numSpaces(int row, int size) {
    if (row> size / 2) 
    {
        row = size - row - 1;
    }
    return size / 2 - row;
}
 

int numStars(int numSpaces, int size) {
    return size/2 - numSpaces;
}

void printStar(int size) {
    for (int row = 0; row < size; row++)
    {   
        // Prints row of Spaces and Stars
        int spaces = numSpaces(row, size);
        for (int i = 0; i < spaces; i++)
        {
            printf(" ");
        }
        int stars = numStars(spaces, size);
        for (int i = 0; i < stars; i++)
        {
            printf("*");
        }
        // Prints new line after each row
        printf("\n");
    }
}


int main(void)
{
    printf("Welcome to the game! Give me an odd number >= 3 to create a unique Diamond pattern!\n");
    int result = validNum();
    printStar(result);
}

// intro -Prompt the user to enter an odd number (representing the size of the diamond) greater than or equal to 3.

// function with loop to make diamond -Generate the diamond pattern using asterisks (*) or any other character of your choice.


//function to ask if they want to go aga