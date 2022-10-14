/* Write a program to delete a node from the linked list. A node can be deleted from the linked
list using three ways:
(a) Delete from the beginning
(b) Delete from the end
(c) Delete from the middle */

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert(int data){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
    }
    else{
        struct node *temp1 = head;
        while(temp1->next != NULL){
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
}

void delete_from_beginning(){
    struct node *temp = head;
    head = head->next;
    free(temp);
}

void delete_from_end(){
    struct node *temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void delete_from_middle(int data){
    struct node *temp = head;
    while(temp->next->data != data){
        temp = temp->next;
    }
    struct node *temp1 = temp->next;
    temp->next = temp->next->next;
    free(temp1);
}

void print(){
    struct node *temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("Printed Successfully");
}

int main(){
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    insert(9);
    insert(10);
    delete_from_beginning();
    delete_from_end();
    delete_from_middle(5);
    print();
    return 0;
}

