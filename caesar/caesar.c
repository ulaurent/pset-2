#include <stdio.h>
#include <cs50.h>

int main (int argc, char *argk[]){
    
    if (argc > 0 && argk[1] > 0){
        printf("hello: %s \n", argk[1]);
    }
    else {
        printf("Invalid input");
    }
}