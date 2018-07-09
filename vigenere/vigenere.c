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


    plaintext = get_string("Your plaintext: ");
    printf("your key length: %lu\n", strlen(argk[1]));
    printf("plaintext first letter ASCII#: %i\n",plaintext[0]);
    printf("here:%i\n", (argk[1][(plaintext[0] % strlen(argk[1]))]));
    printf("whats this: %i\n", (((argk[1][(plaintext[1] % strlen(argk[1]))])-65)%26));

    for(int i=0 ; i < strlen(plaintext); i++){

        if(isalpha(plaintext[i])){

            if(islower(plaintext[i])){
                char fix = ((((plaintext[i]+(argk[1][(plaintext[i] % strlen(argk[1]))]))-97)%26)+97);
                printf("%c", fix);
            }
            else if (isupper(plaintext[i])){
                char fix2 = (plaintext[i]+(((argk[1][(plaintext[i] % strlen(argk[1]))])-65)%26));
                printf("%c", fix2);
            }
            else{
                printf("%c", (plaintext[i]));
            }

            }
        else {
            printf("(not character)");
        }
    }

    printf("\n");

}

