/* CS261- Assignment 1 - Q.3*/
/* Name: Reece Toma
 * Date:7/7/2017
 * Solution description:Bubble Sort
 */
 
#include <stdio.h>
#include<stdlib.h>
#include<math.h>


void sort(int* number, int n){
     /*Sort the given array number , of length n*/    
     int i, j, temp;
     for(i=0; i<n; i++) {
         for(j=0; j<n-i-1; j++) {
             if(number[j]<number[j+1]) {
                 temp = number[j];
                 number[j] = number[j+1];
                 number[j+1] = temp;
             }
         }
     } 
}

int main(){
    /*Declare an integer n and assign it a value of 20.*/
    int n = 20;
    /*Allocate memory for an array of n integers using malloc.*/
    int *integers = 0, i;
    integers = (int *) malloc(n*(sizeof(int)));
    /*Fill this array with random numbers, using rand().*/
    for(i=0; i<n; i++) {
        integers[i] = rand() % n + 1;
    }
    /*Print the contents of the array.*/
    for(i=0; i<n; i++) {
        printf("Array contents: %d: %d\n", i+1, integers[i]);
    }
    /*Pass this array along with n to the sort() function of part a.*/
    sort(integers, n);
    /*Print the contents of the array.*/    
    for(i=0; i<n; i++) {
        printf("Array contents: %d: %d\n", i+1, integers[i]);
    }
    free(integers);
    return 0;
}
