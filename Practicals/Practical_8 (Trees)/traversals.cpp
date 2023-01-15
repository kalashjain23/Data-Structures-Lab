/* Study and implement the Binary Tree and perform the following three types of traversals in the binary
tree. a) Preorder Traversal b) Inorder Traversal c) Postorder Traversal */

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

void preorder(Node* root){
    if(root == NULL) return;

    std::stack<Node*> NodesStack;
    NodesStack.push(root);

    while(!(NodesStack.empty())){
        Node* temp = NodesStack.top();
        std::cout << temp->data << " ";
        NodesStack.pop();

        if(temp->right){
            NodesStack.push(temp->right);
        }
        if(temp->left){
            NodesStack.push(temp->left);
        }
    }
}

void inorder(Node* root){
    if(root == NULL) return;

    std::stack<Node*> NodesStack;
    Node* temp = root;

    while(temp != NULL || !(NodesStack.empty())){
        while(temp != NULL){
            NodesStack.push(temp);
            temp = temp->left;
        }

        temp = NodesStack.top();
        std::cout << temp->data << " ";
        NodesStack.pop();

        temp = temp->right;
    }
}

void postorder(Node* root){
    if(root == NULL) return;

    std::stack<Node*> NodesStack;
    NodesStack.push(root);
    std::stack<int> output;

    while(!(NodesStack.empty())){
        Node* temp = NodesStack.top();
        NodesStack.pop();

        if(temp->left){
            NodesStack.push(temp->left);
        }
        if(temp->right){
            NodesStack.push(temp->right);
        }

        output.push(temp->data);
    }

    while(!(output.empty())){
        std::cout << output.top() << " ";
        output.pop();
    }

}

int main(){
    Node* root = new Node(5);

    root->left = new Node(4);
    root->right = new Node(6);
    root->left->left = new Node(3);

    std::cout << "PreOrder Traversal: ";
    preorder(root);

    std::cout << "\nInOrder Traversal: ";
    inorder(root);
    
    std::cout << "\nPostOrder Traversal: ";
    postorder(root);
}