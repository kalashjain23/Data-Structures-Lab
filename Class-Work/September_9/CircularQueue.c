#include <stdio.h>

int queue[5], front = -1, rear = -1;

int is_full(){
    if(rear == 4 && queue[front] != 0){
        return 1;
    }
    else return 0;
}

int is_empty(){
    if(front > rear){
        return 1;
    }
    else return 0;
}

void enQueue(int num){
    if(is_full()){
        printf("Queue overload.");
    }
    else if(rear == 4){
        rear = 0;
        queue[rear] = num;
    }
    else{
        rear++;
        queue[rear] = num;
    }
}

void deQueue(){

}

int main(){
    int n, num;
    while(1){
        printf("\nWhich operation would you like to use: (1) EnQueue \n(2) DeQueue\n(3) Print Queue\n");
        scanf("%d", &n);
        if(n == 1){
            printf("Enter the element to insert: ");
            scanf("%d", &num);
            enQueue(&num);
        }
        else if(n == 2){
            deQueue();
        }
        else if(n == 3){
            printf("The Queue: ");
            for(int i = front; i <= rear; i++){
                printf("%d ", queue[i]);
            }
        }
        else{
            printf("Invalid input!");
        }
    }
}