/* Create a structure Student in C with student name, student roll number and student address
as its data members. Create the variable of type student and print the values. */

/* Modify the above program to implement the arrays of structure. Create an array of 5 students
and print their values. */

#include <stdio.h>

struct Student{
    char name[20];
    int roll;
    char address[50];
};

int main(){
    struct Student s1;
    printf("Enter the name of the student: ");
    scanf("%s", s1.name);
    printf("Enter the roll number of the student: ");
    scanf("%d", &s1.roll);
    printf("Enter the address of the student: ");
    scanf("%s", s1.address);

    printf("The name of the student is: %s\n", s1.name);
    printf("The roll number of the student is: %d\n", s1.roll);
    printf("The address of the student is: %s\n", s1.address);

    struct Student s2[5];
    for(int i = 0; i < 5; i++){
        printf("Enter the name of the student: ");
        scanf("%s", s2[i].name);
        printf("Enter the roll number of the student: ");
        scanf("%d", &s2[i].roll);
        printf("Enter the address of the student: ");
        scanf("%s", s2[i].address);
    }

    for(int i = 0; i < 5; i++){
        printf("The name of the student is: %s\n", s2[i].name);
        printf("The roll number of the student is: %d\n", s2[i].roll);
        printf("The address of the student is: %s\n", s2[i].address);
    }
}
