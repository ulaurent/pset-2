#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, string argk[]){
    string phrase;
    if(argc > 1 && argc <= 2){
        printf("hello: %s \n", argk[1]);
    }
    else {
        printf("Invalid input");
    }

   int i = atoi(argk[1]);
   printf("Your key is %i\n", i);

   phrase = get_string("What is your phrase: ");

   for (int j =0; j < strlen(phrase); j++){
       //printf("%c %i",phrase[j], (int)phrase[j]);
       int fix = (((int)phrase[j]) + i);
       char fix2 = (phrase[j]+i);
       printf("%c %i\n",fix2, fix);

   }


}