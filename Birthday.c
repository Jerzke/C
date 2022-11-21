#include <stdio.h>
#include <stdbool.h>

void birthday(char name[20], int age){
    
printf ("What is your name?: ");
fflush(stdout);
scanf("%s", name);
printf ("How old did you turn?: ");
fflush(stdout);
scanf("%d", &age);

printf("\nHappy birthday dear %s!", name);
printf("\nYou are now %d years old!", age);

   
}

int main () {
     
char name[20];
int age;

birthday(name, age);



    return 0;
}