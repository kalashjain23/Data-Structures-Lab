/* Implement a stack using an array and using a linked list. */

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

void push(int data){
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

void pop(){
    struct node *temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    temp->next = NULL;
}

void print(){
    struct node *temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    pop();
    print();

    // Implementing stack using an array
    int stack[100], top = -1;
    stack[++top] = 1;
    stack[++top] = 2;
    stack[++top] = 3;
    stack[++top] = 4;
    top--;
    for(int i = 0; i <= top; i++){
        printf("%d ",stack[i]);
    }
    

}
