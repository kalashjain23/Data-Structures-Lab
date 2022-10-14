/* Implement the doubly linked list and perform the insertion operation on it. Again, you can 
perform insertion and deletion according to the three ways as given above. Implement all of them 
according to the availability of time. */

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

void insert(int data){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    if(head == NULL){
        head = temp;
    }
    else{
        struct node *temp1 = head;
        while(temp1->next != NULL){
            temp1 = temp1->next;
        }
        temp1->next = temp;
        temp->prev = temp1;
    }
}

void insert_at_front(int data){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = head;
    temp->prev = NULL;
    head->prev = temp;
    head = temp;
}

void insert_after_node(int data, int node){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    struct node *temp1 = head;
    while(temp1->data != node){
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp->prev = temp1;
    temp1->next = temp;
    temp->next->prev = temp;
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
    insert_at_front(5);
    insert_after_node(6,3);
    print();
}

