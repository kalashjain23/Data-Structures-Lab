#include <stdio.h>
#include <stdlib.h>

struct DoublyLinkedList{
    int val;
    struct DoublyLinkedList* prev;
    struct DoublyLinkedList* next;
}*head, *first, *list;
typedef struct DoublyLinkedList Node;

void insert(int val){
    Node* temp = (Node*)(malloc(sizeof(Node)));
    temp->val = val;
    temp->next = NULL;
    temp->prev = list;

    list->next = temp;
    list = list->next;
}

int main(){

    head = NULL;
    first = (Node*)(malloc(sizeof(Node)));
    first->val = 20;
    first->next = NULL;
    first->prev = NULL;

    head = first;
    list = first;

    int n, val;
    while(1){
        printf("Do you want items (1 / 0): ");
        scanf("%d",&n);
        if(n == 1){
            printf("Value: ");
            scanf("%d",&val);
            insert(val);
        }
        else break;
    }

    printf("The list: ");
    Node* temp = head;
    while(temp != NULL){
        printf("%d ", temp->val);
        temp = temp->next;
    }

}