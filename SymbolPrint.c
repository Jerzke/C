#include <stdio.h>

int main (int argc, char *argv[]) {

int rows;
int columns;
char symbol;

printf ("Enter the amount of rows: ");
scanf ("%d", &rows);

printf("Enter the number of columns: ");
scanf ("%d", &columns);

printf("Enter the symbol: ");
scanf ("%c", &symbol);
scanf("%c");


for (int i = 1; i <= rows; i++)
{
    for (int j = 1; j <= columns; j++){
    
        printf("%c", symbol);
    }
    printf("\n");
}
    return 0;
}