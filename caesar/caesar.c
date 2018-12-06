#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Argument Error\n");
        return 1;
    }


    int num = atoi(argv[1]) % 26;

    // Accept phrase
    string phrase = get_string("phrase: ");
    printf("ciphertext: ");

    // Loop to iterate over each index of phrase
    for (int i = 0; i < strlen(phrase); i++)
    {
        //If alpha, change it, if not carry on
        if (isalpha(phrase[i]))
        {
            int beg = 0;
            int end = 0;

            //If uppercase set Beginning and End
            if (isupper(phrase[i]))
            {
                beg = 'A';
                end = 'Z';
            }
            // else If lowercase set Beginning and end to..
            else if (islower(phrase[i]))
            {
                beg = 'a';
                end = 'z';
            }


            if (phrase[i] + num > end)
            {
                printf("%c", (beg + phrase[i] + num - end - 1));

            }

            else
            {
                printf("%c", phrase[i] + num);
            }
        }

        //Else , just print if not alpha
        else
        {
            printf("%c", phrase[i]);
        }
    }
    printf("\n");
    return 0;
}
