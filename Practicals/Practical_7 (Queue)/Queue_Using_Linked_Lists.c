/* Implement various functionalities of Queue using Linked Lists. Again, you can implement operation
given above. */

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

int is_empty(){
    return front == NULL ? 1 : 0;
}

void front_element(){
    if(is_empty()){
        printf("Queue is empty.");
    }
    else{
        printf("Front element: %d", front->data);
    }
}

void rear_element(){
    if(is_empty()){
        printf("Queue is empty.");
    }
    else{
        printf("Rear element: %d", rear->data);
    }
}

void enqueue(int item){
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = item;
    new_node->next = NULL;

    if(is_empty()){
        front = new_node;
        rear = new_node;
    }
    else{
        rear->next = new_node;
        rear = new_node;
    }
}

void dequeue(){
    if(is_empty()){
        return;
    }
    else{
        struct node *temp = front;
        front = front->next;
        free(temp);
    }
}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    dequeue();
    dequeue();

    front_element();
    rear_element();
}


