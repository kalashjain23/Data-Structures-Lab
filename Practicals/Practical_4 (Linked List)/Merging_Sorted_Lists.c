/* Write a program that takes two sorted lists as inputs and merge them into one sorted list. */

#include <stdio.h> 
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head1 = NULL;
struct node *head2 = NULL;
struct node *head3 = NULL;

void insert1(int data){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    if(head1 == NULL){
        head1 = temp;
    }
    else{
        struct node *temp1 = head1;
        while(temp1->next != NULL){
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
}

void insert2(int data){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    if(head2 == NULL){
        head2 = temp;
    }
    else{
        struct node *temp1 = head2;
        while(temp1->next != NULL){
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
}

void merge(){
    struct node *temp1 = head1;
    struct node *temp2 = head2;
    while(temp1 != NULL && temp2 != NULL){
        if(temp1->data < temp2->data){
            insert3(temp1->data);
            temp1 = temp1->next;
        }
        else{
            insert3(temp2->data);
            temp2 = temp2->next;
        }
    }
    while(temp1 != NULL){
        insert3(temp1->data);
        temp1 = temp1->next;
    }
    while(temp2 != NULL){
        insert3(temp2->data);
        temp2 = temp2->next;
    }
}

void display(){
    struct node *temp = head3;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main(){
    insert1(1);
    insert1(3);
    insert1(5);
    insert1(7);
    insert1(9);
    insert2(2);
    insert2(4);
    insert2(6);
    insert2(8);
    insert2(10);
    merge();
    display();
}
