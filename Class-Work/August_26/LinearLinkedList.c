#include <stdio.h>
#include <stdlib.h>

struct Linked_List{
    int data;
    struct Linked_List *next;
}*head, *list;
typedef struct Linked_List Node;

void insert(int val){
    Node* temp = (Node*)(malloc(sizeof(Node)));
    temp->data = val;
    temp->next = NULL;

    list->next = temp;
    list = list->next;
}

int main(){
    int n, val;

    head = NULL;
    list = (Node*)(malloc(sizeof(Node)));

    list->data = 2;
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
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }

}