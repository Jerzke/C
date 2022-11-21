#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

int main () {

    srand(time(NULL)); //srand() is the seed which rand() calls for. time(NULL) gives rand its value (Time passed since 1st of january 1970 in seconds)
    char * characters = "abcdefghijklmnopqrstuvw1234567890!#¤%&/(^*"; //Declares the variable characters and gives it all the possible characters that can be used.
    int characterAmount = strlen(characters); //Declares the variable characterAmountt and makes it equal to the amount of characters in characters array.


    while (true) //basic whileloop
    {
        int lenght;//creates in variable which holds integar values for the lenght of password 
        printf("Amount of characters you would like to have in your password: "); //prompts user for the amount of characters wanted for password 
        scanf("%d", &lenght); //scans for user input in variable int lenght
        int i; //create variable i
        for (i = 0; i < lenght; i++) //creates a For loop where variable i is set at 0, while variable i is larger than variable lenght 1 is added to i
        { 
            printf("%c", characters[(int) ((rand() / ((double)RAND_MAX + 1)) * characterAmount)]); 
            //Calls to print the variable type "%c"(char) and defines which variable to print 
            //Calculates the value for variable characters by generating a random integar number with int rand() then deviding it by double(RAND_MAX + 1 )
            // and multiplying it by variable characterAmount input.
        }
    }

return 0;
} 
