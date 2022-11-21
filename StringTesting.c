#include <stdio.h>
#include <string.h>

int main () {

char string1[] = "StringTest";
char string2[] = "StringTest";
//strlwr(string1);
//strcat(string1, string2);
//strncat(string1, string2, 3);
//strcpy(string1, string2);
//strncpy(string1, string2, 1);
//strset(string1, '?');
//strnset(string1,'x', 2);
//strrev(string1);



//int result = strlen(string1);
int result = strcmp(string1, string2);

//printf("%d ", result);


if (result == 0) {
    printf("The strings are equal") ;
}else{
    printf("The strings are not equal");
}

}