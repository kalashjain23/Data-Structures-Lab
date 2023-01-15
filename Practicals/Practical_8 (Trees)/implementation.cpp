/* Write a program to insert an element, delete an element and search an element in the Binary Tree. */

#include <iostream>

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->right = NULL;
        this->left = NULL;
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

void insert(Node* root, int val){
    Node* temp = root;

    while(temp){
        if(val < temp->data){
            if(temp->left == NULL){
                temp->left = new Node(val);
                break;
            }
            temp = temp->left;
        }
        else{
            if(temp->right == NULL){
                temp->right = new Node(val);
                break;
            }
            temp = temp->right;
        }
    }
}

void search(Node* root, int val){
    Node* temp = root;

    while(temp){
        if(val == temp->data){
            std::cout << "Found" << std::endl;
            return;
        }
        else if(val < temp->data){
            temp = temp->left;
        }
        else{
            temp = temp->right;
        }
    }

    std::cout << "Not Found" << std::endl;
}

int main(){
    Node* root = new Node(10);
    insert(root, 6);
    insert(root, 8);
    insert(root, 9);
    insert(root, 2);

    std::cout << "Preorder Traversal: ";
    print(root);

    std::cout << "\nSearch for 9: " << std::endl;
    search(root, 9);

}
