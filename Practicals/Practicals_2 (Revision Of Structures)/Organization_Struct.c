/* Create a structure Organization with organization name and organization ID as its data member.
Next, create another structure Employee that is nested in structure Organization with employee ID,
employee salary and employee name as its data members. Write a program in such a way that there
are two organizations and each of these contains two employees. */

#include <stdio.h>

struct Organization{
    char name[20];
    int id;

    struct Employee{
        int id;
        int salary;
        char name[20];
    }Employee[2];

};

int main(){
    struct Organization o1;
    printf("Enter the name of the organization: ");
    scanf("%s", o1.name);
    printf("Enter the ID of the organization: ");
    scanf("%d", &o1.id);

    for(int i = 0; i < 2; i++){
        printf("Enter the name of the employee: ");
        scanf("%s", o1.Employee[i].name);
        printf("Enter the ID of the employee: ");
        scanf("%d", &o1.Employee[i].id);
        printf("Enter the salary of the employee: ");
        scanf("%d", &o1.Employee[i].salary);
    }

    struct Organization o2;
    printf("Enter the name of the organization: ");
    scanf("%s", o2.name);
    printf("Enter the ID of the organization: ");
    scanf("%d", &o2.id);

    for(int i = 0; i < 2; i++){
        printf("Enter the name of the employee: ");
        scanf("%s", o2.Employee[i].name);
        printf("Enter the ID of the employee: ");
        scanf("%d", &o2.Employee[i].id);
        printf("Enter the salary of the employee: ");
        scanf("%d", &o2.Employee[i].salary);
    }

    printf("The name of the organization is: %s", o1.name);
    printf("The ID of the organization is: %d", o1.id);
    for(int i = 0; i < 2; i++){
        printf("The name of the employee is: %s", o1.Employee[i].name);
        printf("The ID of the employee is: %d", o1.Employee[i].id);
        printf("The salary of the employee is: %d", o1.Employee[i].salary);
    }
    
    printf("The name of the organization is: %s", o2.name);
    printf("The ID of the organization is: %d", o2.id);
    for(int i = 0; i < 2; i++){
        printf("The name of the employee is: %s", o2.Employee[i].name);
        printf("The ID of the employee is: %d", o2.Employee[i].id);
        printf("The salary of the employee is: %d", o2.Employee[i].salary);
    }
}
