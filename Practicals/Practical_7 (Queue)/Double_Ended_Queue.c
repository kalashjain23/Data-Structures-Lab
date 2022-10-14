/* Implement Double Ended Queue that supports following operation:
a. insertFront(): Adds an item at the front of Deque
b. isnertLast(): Adds an item at the rear of Deque
c. deleteFront(): Deletes an item from the front of Deque
d. deleteLast(): Deletes an item from the rear of Deque */

#include <stdio.h>
#include <stdlib.h>

int queue[50];
int front = 0;
int rear = 0;

int isEmpty(){
    return front == rear ? 1 : 0;
}

int isFull(){
    return rear == 50 ? 1 : 0;
}

void getFront(){
    if(isEmpty()){
        printf("Queue is empty.");
    }
    else{
        printf("Front element: %d", queue[front]);
    }
}

void getRear(){
    if(isEmpty()){
        printf("Queue is empty.");
    }
    else{
        printf("Rear element: %d", queue[rear-1]);
    }
}

void insertFront(int item){
    for(int i = rear; i > front; i--){
        queue[i] = queue[i-1];
    }
    queue[front] = item;
    rear++;
}

void insertRear(int item){
    queue[rear] = item;
    rear++;
}

void deleteFront(){
    if(isEmpty()){
        return;
    }
    else{
        front++;
    }
}

void deleteRear(){
    if(isEmpty()){
        return;
    }
    else{
        rear--;
    }
}

int main(){
    insertFront(1);
    insertFront(2);
    insertFront(3);
    insertFront(4);
    insertFront(5);

    insertRear(6);
    insertRear(7);
    insertRear(8);
    insertRear(9);
    insertRear(10);

    deleteFront();
    deleteFront();

    deleteRear();
    deleteRear();

    getFront();
    getRear();

}
