#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

/*int =  integer (Kokonaisluvut), float =  4 bytes 6-7 digits and decimals, char = characters, [] with double brackets ("example") for multiple characters inside an array
double = 8 bytes 15-16 digits and decimals, bool = 1 byte (true/false) */

/*int = %d, char = %s (string) for multiple characters, float = %f, char = %c for single characters, double =  %lf, bool = %d, unsigned integers = %u */
int main(){

char operator;
double num1;
double num2;
double result;

printf("Enter an operator ( + - * / )");

scanf("%c", &operator);

printf("Enter number 1: ");
scanf("%lf", &num1);

printf("Enter number 2: ");
scanf("%lf", &num2);

switch(operator){
    case '+': 
    result = num1 + num2;
    printf("The answer is: %.2lf", result);
    break;
    case '-': 
    result = num1 - num2;
    printf("The answer is: %.2lf", result);
    break;
    case '*':
    result = num1 * num2;
    printf("The answer is: %.2lf", result);
    break;
    case '/': 
    result = num1 / num2;
     printf("The answer is: %.2lf", result);
    break;
    default:
    printf("Your operator \"%c\" is not valid, please use an operator listed above", operator);
}

return 0;

}


