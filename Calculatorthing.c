#include <stdio.h>

int main (int argc, char *argv[]) {

int number = 0;
int sum = 0;

do {
    printf ("Enter a number above 0: ");
    scanf ("%d", &number);
    if (number > 0)
    {
        sum = sum + number;
    } /*else {
        printf ("You entered a negative number, please try again: ");
        scanf ("%d", &number);
        if (number > 0);
    }*/
   
}while (number > 0);

printf("%d", sum);

    return 0;
}