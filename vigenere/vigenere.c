#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argk[]){

    string plaintext;

    if (argc > 1 && argc <= 2){
    printf("key phrase: %s\n", argk[1]);
    }
    else{
        printf("ERORR INVALID INPUT\n");
        }


    int j = 0;

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
