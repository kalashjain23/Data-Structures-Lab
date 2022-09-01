#include <stdio.h>
#include <stdlib.h>

struct CircularLinearLinkedList{
    int val;
    struct CircularLinearLinkedList *next;
}*head, *list;
typedef struct CircularLinearLinkedList Node;

void insert(int val){
    Node* temp = (Node*)(malloc(sizeof(Node)));
    temp->val = val;
    temp->next = head;

    list->next = temp;
    list = list->next;
}

int main(){
    int n, val;

    head = NULL;
    list = (Node*)(malloc(sizeof(Node)));
    list->val = 20;
    list->next = NULL;

    head = list;

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

    Node* temp = head;
    printf("The list: ");
    do{
        printf("%d ", temp->val);
        temp = temp->next;
    } while(temp != head);

}