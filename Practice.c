#include <stdio.h>

/*int =  integer (Kokonaisluvut), float = 2 decimals, char = characters, [] with double brackets ("example") for multiple characters inside an array*/
/*int = %d, char = %s (string) for multiple characters, float = %f, char = %c for single characters */
int main(){
int x;
x = 123;
int y = 321;

int age = 22; 
float gpa = 3.64;
char grade = 'L';
char name[] = "Jere"; 

printf("Hello %s\n", name);
printf("You are %d years old.\n", age);
printf("Your gpa is %f\n", gpa);
printf("Your grade in english was %c\n", grade);

    return 0;
}