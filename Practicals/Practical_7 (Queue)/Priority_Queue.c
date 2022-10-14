/* Implement Priority Queue, where every element has a priority associated with it. Perform operations
like insertion and deletion in a priority queue. */

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    int priority;
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

void enqueue(int item, int priority){
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = item;
    new_node->priority = priority;
    new_node->next = NULL;

    if(is_empty()){
        front = new_node;
        rear = new_node;
    }
    else{
        struct node *temp = front;
        struct node *prev = NULL;
        while(temp != NULL && temp->priority < priority){
            prev = temp;
            temp = temp->next;
        }
        if(prev == NULL){
            new_node->next = front;
            front = new_node;
        }
        else if(temp == NULL){
            rear->next = new_node;
            rear = new_node;
        }
        else{
            prev->next = new_node;
            new_node->next = temp;
        }
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
    enqueue(1, 1);
    enqueue(2, 2);
    enqueue(3, 3);
    enqueue(4, 4);
    enqueue(5, 5);
    dequeue();
    dequeue();

    front_element();
    rear_element();

}

