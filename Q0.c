/* CS261- Assignment 1 - Q. 0*/
/* Name:Reece Toma
 * Date:7/7/2017
 * Solution description: Pointers and Address of
 */
 
#include <stdio.h>
#include <stdlib.h>

void fooA(int* iptr){
     /*Print the value pointed to by iptr*/
     printf("%d\n", (*iptr));
     /*Print the address pointed to by iptr*/
     printf("%d\n", &(*iptr));
     /*Print the address of iptr itself*/
     printf("%d\n", &iptr);
     }

int main(){
    
    /*declare an integer x*/
    int x = 10;
    /*print the address of x*/
    printf("\n%d\n", &x);
    /*Call fooA() with the address of x*/
    fooA(&x);
    /*print the value of x*/
    printf("%d\n\n", x);
    
    return 0;
}
