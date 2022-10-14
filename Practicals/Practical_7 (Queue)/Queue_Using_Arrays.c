/* Implement various functionalities of Queue using Arrays. For example, insertion, deletion,
front element, rear element, etc. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int queue[50];
int front = 0;
int rear = 0;

int is_empty(){
    return front == rear ? 1 : 0;
}

void front_element(){
    if(is_empty()){
        printf("Queue is empty.");
    }
    else{
        printf("Front element: %d", queue[front]);
    }
}

void rear_element(){
    if(is_empty()){
        printf("Queue is empty.");
    }
    else{
        printf("Rear element: %d", queue[rear-1]);
    }
}

void enqueue(int item){
    queue[rear] = item;
    rear++;
}

void dequeue(){
    if(is_empty()){
        return;
    }
    else{
        front++;
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
