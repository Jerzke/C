/*int =  integer (Kokonaisluvut), float =  4 bytes 6-7 digits and decimals, char = characters, [] with double brackets ("example") for multiple characters inside an array
double = 8 bytes 15-16 digits and decimals, bool = 1 byte (true/false) */

/*int = %d, char = %s (string) for multiple characters, float = %f, char = %c for single characters, double =  %lf, bool = %d, unsigned integers = %u */


#include <stdio.h>
#include <stdbool.h>



int main (int argc, char *argv[]) {
    

float temp; 
bool sunny;


printf ("Temperature: ");
    scanf ("%f", &temp);

printf ("Is it Sunny (True/False): ? ");
scanf ("%d", &sunny);

if (temp <= 0 || temp >= 30) {
    printf ("The weather is good!\n");
}else{
    printf("The weather is bad!\n");
}


    return 0;
}
