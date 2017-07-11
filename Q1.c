/* CS261- Assignment 1 - Q.1*/
/* Name:Reece Toma
 * Date:7/7/2017
 * Solution description: Allocate and Deallocate Memory
 */
 
#include <stdio.h>
#include<stdlib.h>
#include<math.h>

struct student{
	int id;
	int score;
};

struct student* allocate(){
     /*Allocate memory for ten students*/
     struct student *my_student;
     my_student = (struct student*) malloc(10*(sizeof(struct student*)));
     int i;
     for(i = 0; i < 10; i++) {
     my_student[i].id = 0;
     my_student[i].score = 0;
    }
     /*return the pointer*/
     return my_student;
}

void generate(struct student* students){
     /*Generate random and unique ID and scores for ten students, ID being between 1 and 10, scores between 0 and 100*/
     int i;
     for(i = 0; i < 10; i++) {
         students[i].id = i + 1;
         students[i].score = rand() % 100 +1;
     }
}

void output(struct student* students){
     /*Output information about the ten students in the format:
              ID1 Score1
              ID2 score2
              ID3 score3
              ...
              ID10 score10*/
    int i;
    for(i = 0; i < 10; i++) {
        printf("%d %d\n", students[i].id, students[i].score);
    }
}

void summary(struct student* students){
     /*Compute and print the minimum, maximum and average scores of the ten students*/
     int min = 100, max = 0, avg = 0, sum = 0, i;
     for(i = 0; i < 10; i++) {
         sum += students[i].score;
         if(students[i].score > max)
            max = studnets[i].score;
         if(students[i].score < min)
            min = students[i].score;
     }

     avg = sum/10;

     printf("\nMaximum: %d\n", max);
     printf("Minimum: %d\n", min);
     printf("Average: %d\n", avg);
}

void deallocate(struct student* stud){
     /*Deallocate memory from stud*/
     free(stud);
}

int main(){
    struct student* stud = NULL;
    
    /*call allocate*/
    stud = allocate();
    /*call generate*/
    generate (stud);
    /*call output*/
    output(stud);
    /*call summary*/
    summary(stud);
    /*call deallocate*/
    deallocate(stud);
    return 0;
}
