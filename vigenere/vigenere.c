/* This program takes arguments to a cryptic message, and translates the users
message based on those parameters*/

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argk[]){

    // Introduced local variable within main function
    string plaintext;

    // Add parameters to number of arguments accepted in the command line
    if (argc > 1 && argc <= 2){
    printf("key phrase: %s\n", argk[1]);
    }
    else{
        printf("ERORR INVALID INPUT\n");
    }

    // Get string function from user and set it equal to the variable plaintext
    plaintext = get_string("What is your text: ");

    int j = 0;

    // For loop to iterate through plaintext, and adjust j by ++ 1, through each iteration, so argument in
    // command line can repeatedly iterated through
    for(int i=0 ; i < strlen(plaintext); i++){

        j = j % strlen(argk[1]);

        if(isalpha(plaintext[i])){

            if(islower(plaintext[i])){
                char fix = (((plaintext[i]-97)+(argk[1][j]-97))%26)+97;
                printf("%c", fix);
            }
            else if (isupper(plaintext[i])){
                char fix2  = (((plaintext[i]-65)+(argk[1][j]-65))%26)+65;
                printf("%c", fix2);
            }

            j++;
        }

            else{
                printf("%c", (plaintext[i]));
            }


    }

    printf("\n");

}








