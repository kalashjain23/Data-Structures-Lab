/* Write a program in C to implement pointers to structures. */

#include <stdio.h>

struct student{
    char name[20];
    int roll;
    float marks;
};

int main(){
    struct student s1 = {"John", 1, 90.5};
    struct student *p = &s1;
    printf("Name: %s", p->name);
    printf("Roll: %d", p->roll);
    printf("Marks: %f", p->marks);
}
