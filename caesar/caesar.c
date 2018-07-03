#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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
       if(islower(phrase[j])){
           char fix = ((((phrase[j]+i)-97)%26)+97);
           printf("%c", fix);
       }
       else if (isupper(phrase[j])){
           char fix2 = ((((phrase[j]+i)-65)%26)+65);
           printf("%c", fix2);
       }
       else{
           printf("%c", (phrase[j]));
       }

   }

   printf("\n");


}