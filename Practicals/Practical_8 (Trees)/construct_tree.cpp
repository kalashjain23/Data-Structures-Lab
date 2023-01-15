/* Given a preorder traversal sequence of a Binary Search Tree, contruct the corresponding Binary Tree. */

#include <iostream>
#include <stack>

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void print(Node* node){
    if(node == NULL){
        return;
    }

    std::cout << node->data << " ";
    print(node->left);
    print(node->right);
}

Node* construct_tree(int* arr, int size){
    Node* root = new Node(arr[0]);
    std::stack<Node*> NodesStack;
    NodesStack.push(root);

    for(int i = 1; i < size; i++){
        Node* temp = NodesStack.top();
        Node* newNode = new Node(arr[i]);

        if(arr[i] < temp->data){
            temp->left = newNode;
            NodesStack.push(newNode);
        }
        else{
            while(!(NodesStack.empty()) && NodesStack.top()->data < arr[i]){
                temp = NodesStack.top();
                NodesStack.pop();
            }

            temp->right = newNode;
            NodesStack.push(newNode);
        }
    }

    return root;
}

int main(){
    int arr[] = {10, 5, 1, 7, 40, 50};
    int size = sizeof(arr)/sizeof(arr[0]);

    Node* root = construct_tree(arr, size);
    print(root);

    return 0;
}
