#include <stdio.h>

int queue[10], front = -1;

int is_full(){
    if(front == 9){
        return 1;
    }
    else return 0;
}

int is_empty(){
    if(front == -1){
        return 1;
    }
    else return 0;
}

void enQueue(int *num){
    if(is_full()){
        printf("Queue Overload.");
    }
    else{
        front++;
        queue[front] = *num;
    }
}

void deQueue(){
    if(is_empty()){
        printf("Queue is already empty!");
    }
    else{
        printf("Top element: %d\n", queue[0]);
        for(int i = 1; i <= front; i++){
            queue[i-1] = queue[i];
        }
        queue[front] = 0;
        front--;
    }
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
            for(int i = 0; i <= front; i++){
                printf("%d ", queue[i]);
            }
        }
        else{
            printf("Invalid input!");
        }
    }
}