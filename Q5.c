/* CS261- Assignment 1 - Q.5*/
/* Name:Reece Toma
 * Date:7/10/17
 * Solution description:
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*converts ch to upper case, assuming it is in lower case currently*/
char toUpperCase(char ch){
     return ch-'a'+'A';
}

/*converts ch to lower case, assuming it is in upper case currently*/
char toLowerCase(char ch){
     return ch-'A'+'a';
}

void sticky(char* word){
     /*Convert to sticky caps*/
     int i;
     for(i=0; i<(strlen(word)); i++) {
         word[i]=toUpperCase(word[i]);
     }
}

int main(){
    /*Read word from the keyboard using scanf*/
    char *user_input;
    user_input= (char*) malloc (256*(sizeof(char)));

    printf("Please enter a word:");
    scanf("%s", user_input;
    /*Call sticky*/
    sticky(user_input);
    /*Print the new word*/
    int i;
    for(i=0; i<(strlen(user_input)); i++) {
        printf("%c", user_input[i]);
    }
    free(input);
    return 0;
    
}
