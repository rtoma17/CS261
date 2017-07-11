/* CS261- Assignment 1 - Q.4*/
/* Name:Reece Toma
 * Date:7/10/2017
 * Solution description:
 */
 
#include <stdio.h>
#include<stdlib.h>
#include<math.h>

struct student{
	int id;
	int score;
};

void sort(struct student* students, int n){
     /*Sort the n students based on their score*/ 
     int i, j;
     struct student s;
     for(i=0; i<n; i++) {
         for(j=0; j<n-i+1; j++) {
             if(students[j].score>students[j+1].score) {
                 s=students[j];
                 students[j]=students[j+1];
                 students[j+1]=s;
             }
         }
     }    
}

int main(){
    /*Declare an integer n and assign it a value.*/
    int n = 5;
    /*Allocate memory for n students using malloc.*/
    struct student *my_student;
    my_student=(struct student *) malloc (10*(sizeof(struct student)));
    /*Generate random and unique IDs and random scores for the n students, using rand().*/
    int i;
    for(i=0; i<n; i++) {
        my_student[i].id=rand() % n+1;
        my_student[i].score=rand() 100+1;
    }
    /*Print the contents of the array of n students.*/
     int i;
    for(i=0; i<n; i++) {
        printf("Student: %d\n ID: %d\n Score: %d\n\n", i+1, my_student[i].id, my_student[i].score);
    }
    /*Pass this array along with n to the sort() function*/
    sort(my_student, n);
    /*Print the contents of the array of n students.*/
    for(i=0; i<n; i++) {
         printf("Student: %d\n ID: %d\n Score: %d\n\n", i+1, my_student[i].id, my_student[i].score);
    }
    free(my_student);
    return 0;
}
