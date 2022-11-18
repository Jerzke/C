#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

/*int =  integer (Kokonaisluvut), float =  4 bytes 6-7 digits and decimals, char = characters, [] with double brackets ("example") for multiple characters inside an array
double = 8 bytes 15-16 digits and decimals, bool = 1 byte (true/false) */

/*int = %d, char = %s (string) for multiple characters, float = %f, char = %c for single characters, double =  %lf, bool = %d, unsigned integers = %u */
int main(){


char grade;

printf("\n Enter a letter grade: ");
scanf("%c",&grade);


switch (grade){
case 'A':
printf("Amazing!\n");
break;
case 'B':
printf("Bright!\n");
break;
case 'C':
printf("Getting there!\n");
break;
case 'D':
printf("Apply yourself\n");
break;
case 'F': 
printf("Pathetic\n");
break;
}

return 0;

}
