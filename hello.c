#include <stdio.h>

int main(void){
   
    /*
    - fgets(name, sizeof(name), stdin); // fgets can get a sentence
    - scanf("%s", name); // scanf just can get one word

    - stdin is part of the standard C library to read input. 
    */

    char name[11];
    printf("What is your name? ");
    fgets(name, sizeof(name), stdin);
    printf("hello my name is, %s\n", name);
    // printf("the variable name have %zu bytes",sizeof(name));
}
