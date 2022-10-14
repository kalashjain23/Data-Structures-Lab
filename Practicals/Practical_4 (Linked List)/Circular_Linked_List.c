/* Implement the circular linked list and perform the operation of traversal on it. In a conventional
linked list, we traverse the list from the head node and stop the traversal when we reach NULL.
In a circular linked list, we stop traversal when we reach the first node again. */

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
        temp->next = head;
    }
    else{
        struct node *temp1 = head;
        while(temp1->next != head){
            temp1 = temp1->next;
        }
        temp1->next = temp;
        temp->next = head;
    }
}

void print(){
    struct node *temp = head;
    while(temp->next != head){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("%d ",temp->data);
    printf("Printed Successfully");
}

int main(){
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    print();
}

