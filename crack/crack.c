#define _XOPEN_SOURCE
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <crypt.h>

int
main(int argc, string argk[])
{
    if (argc != 2 ){

    printf("Error\n");

    return 1;

    }

    else {
        printf("%s\n", argk[1]);
    }

    string salt = (argk[1][0],argk[1][1]);


     /*
    char password[] = "AAAA";
    char toCrack[] = "AAzz";
    printf("%s\n", password);
    printf("%s\n", toCrack);

    char *toCrackCiph = crypt(toCrack, "da");
    printf("%s\n", toCrackCiph);

    char *passwordCiph = crypt(password, "aa");
    printf("%s\n", passwordCiph);
    return 0; */
}