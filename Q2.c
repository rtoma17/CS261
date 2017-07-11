/* CS261- Assignment 1 - Q.2*/
/* Name:Reece Toma
 * Date:7/7/2017
 * Solution description:Passing pointers to functions
 */
 
#include <stdio.h>
#include <stdlib.h>

int foo(int* a, int* b, int c){
    /*Set a to double its original value*/
    *a += *a;
    /*Set b to half its original value*/
    *b += (*b / 2);
    /*Assign a+b to c*/
    c = (*a + *b);
    /*Return c*/
    return c;
}

int main(){
    /*Declare three integers x,y and z and initialize them to 5, 6, 7 respectively*/
    int x = 5, y = 6, z = 7;
    /*Print the values of x, y and z*/
    printf("X = %d\n", x);
    printf("Y = %d\n", y);
    printf("Z = %d\n", z);
    /*Call foo() appropriately, passing x,y,z as parameters*/
    a = foo(&x, &y, z);
    /*Print the value returned by foo*/
    printf("Value returned by foo = %d\n", a);
    /*Print the values of x, y and z again*/
    printf("X = %d\n", x);
    printf("Y = %d\n", y);
    printf("Z = %d\n", z);
    /*Is the return value different than the value of z?  Why?*/
    return 0;
}
    
/**************
    Because z is not passed as a pointer, you cannot see a change in z.
    The value of z changes only in foo
**************/
