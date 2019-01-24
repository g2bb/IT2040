/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    srand(time(NULL)); //Start rand generator
    int NUM = rand() % 100 + 1; //Generate rand number
    if(NUM%3==0 && NUM%5==0) {
        printf("FizzBuzz\n");
    } else if(NUM%3==0) {
        printf("Fizz\n");
    } else if(NUM%5==0) {
        printf("Buzz\n");
    } else {
        printf("%d\n", NUM);
    }
    printf("The number was  %d\n", NUM);
}

