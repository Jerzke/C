#include <stdio.h>
#include <stdbool.h>

/*int =  integer (Kokonaisluvut), float =  4 bytes 6-7 digits and decimals, char = characters, [] with double brackets ("example") for multiple characters inside an array
double = 8 bytes 15-16 digits and decimals, bool = 1 byte (true/false) */

/*int = %d, char = %s (string) for multiple characters, float = %f, char = %c for single characters, double =  %lf, bool = %d, unsigned integers = %u */
int main(){
float c = 3.141592653589793238462643383279502884197;
double d = 3.141592653589793238462643383279502884197;
bool e = true;
char f = 120;
unsigned char g = 255;
short int h = 32767;
unsigned short int i = 65535;
int j = 2147483647;
unsigned int k = 4294967295;
long long int l = 9223372036854775807;
unsigned long long int m = 18446744073709551615;

printf("float: %0.15f\n",c);
printf("double: %0.15lf\n",d);
printf("bool: %d\n",e);
printf("Character: %c\n",f);
printf("Unsigned character: %d\n",g);
printf("short int: %d\n",h);
printf("short int: %d\n",i);
printf("Signed integer: %d\n",j);
printf("unsigned int: %u\n",k);
printf("Long Long int %lld\n", l);
printf("Unsigned long long int %llu", m);

    return 0;
}