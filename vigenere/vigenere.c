#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argk[]){
    string plaintext;

    if (argc > 1 && argc <= 2){
    printf("key phrase: %s\n", argk[1]);
    }
    else{
        printf("ERORR");
    }

    plaintext = get_string("Your text: ");

    for (int j = 0; j < strlen(plaintext); j++){
        for (int k = 0; k < strlen(argk); k++){
       printf((((plaintext[j]+argk[1][k])-97)%26)+97);
        }
    }
}