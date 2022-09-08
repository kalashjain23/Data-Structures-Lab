#include <stdio.h>
#include <stdlib.h>

int stack[3];
int top = -1;

void push(int size, int item){
    if(top == size-1){
        printf("Stack overflowed.");
    }
    else{
        top++;
        stack[top] = item;
    }
}

void top_element(){
    printf("The top element is: %d", stack[top]);
}

int is_empty(){
    if(top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void pop(){
    if(is_empty()){
        printf("The stack is empty.");
    }
    else{
        printf("Top element: %d", stack[top]);
        top--;
    }
}

int main(){
    int item, n;
    int size = 3;
    while(1){
        printf("\nChoose the operation: \n (1) Push\n (2) Pop\n (3) Top\n");
        scanf("%d",&n);
        if(n == 1){
            printf("Enter value: ");
            scanf("%d", &item);
            push(size, item);
        }
        else if(n == 2){
            pop();
        }
        else if(n == 3){
            top_element();
        }
        else break;
    }
}