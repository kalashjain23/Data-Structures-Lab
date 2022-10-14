/* Given an expression, write a program to examine whether the pairs and the orders of "(", ")",
"{", "}", "[", "]" are correct in the expression or not.
Example:    Input: exp = "[()]{}{[()()]()}""  Output: Balanced
            Input: exp = "[(])"               Output: Not Balanced */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char stack[50];
int top = 0;

int is_empty(){
    return top == -1 ? 1 : 0;
}

void push(int item){
    top++;
    stack[top] = item;
}

void pop(){
    if(is_empty()){
        return;
    }
    else{
        top--;
    }
}

int main(){
    printf("Enter string: ");
    char s[50];
    scanf("%s", s);

    for(int i = 0; i < sizeof(s)/sizeof(s[0]); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            stack[top] += s[i];
        }
        else{
            if(s[i] == '}' && stack[top] == '{'){
                pop();
            }
            else if(s[i] == ')' && stack[top] == '('){
                pop();
            }
            else if(s[i] == ']' && stack[top] == '['){
                pop();
            }
        }
    }
}
