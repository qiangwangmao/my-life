#include <stdio.h> //it's a header file library that lets us work with input and output functions

int main() { //main is a function //void = nothing but with my consent
    puts("Hello World\nGoodbye World\n"); //printf/puts are functions //"Hello world" is a string
    // "\n" adds a new line (unsure)
    //**"puts" works as an alternative to printf where i dont have to type the \n**
    int number = 14; //number variable (whole numbers)
    char letter = 'F'; //letter variable
    float decim = 12.34; //decimals variable
    printf("My number: " "%d\n", number); // "%d" = printing numbers,,, "%s" = printing text
    printf("My letter: " "%c\n", letter); // "%c" = printing char data type
    printf("My grades: " "%f\n\n", decim); // "%f" = printing float data type (decimals)
    number = 15; //changes variable value
    letter = 'A'; //changes variable value
    decim = 56.78; //changes variable value
    printf("My number 2: " "%d\n", number); //prints variable with its new value
    printf("My letter 2: ""%c\n", letter); //same as above
    printf("My grades 2: ""%f\n\n", decim); //^^^^^^^^^^^^^^
    int x = 12, y = 24, z = 36;
    printf("The answer to 12 + 24 + 36 is: " "%d\n", x + y + z); // additions
    printf("The answer to 12 + 24 / 36 is: " "%d\n", x + y / z); // additions & divisions
    printf("The BIG answer to 12 * 24 * 36 is: " "%d\n\n", x * y * z); // multiplying
}