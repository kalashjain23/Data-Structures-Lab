/* Convert the given infix expression into postfix expression using stack. */

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
    stack[0] = '(';
    int item, n;
    char input[50], output[50];
    char brac = ')';

    printf("Enter string: ");
    scanf("%s", input);
    strncat(input, &brac, 1);

    for(int i = 0; i < strlen(input); i++){

        if(input[i] == '('){
            push('(');
        }
        else if(input[i] == ')'){
            while(stack[top] != '('){
                strncat(output, &stack[top], 1);
                pop();
            }
            pop();
        }

        else if(input[i] == '^') push('^');

        else if(input[i] == '*' || input[i] == '/'){
            if(stack[top] == '+' || stack[top] == '-'){
                push(input[i]);
            }
            else if(stack[top] == '*' || stack[top] == '/'){
                strncat(output, &stack[top], 1);
                pop();
                push(input[i]);
            }
            else{
                strncat(output, &stack[top], 1);
                pop();
                i--;
            }
        }

        else if(input[i] == '+' || input[i] == '-'){
            if(stack[top] == '+' || stack[top] == '-'){
                strncat(output, &stack[top], 1);
                pop();
                push(input[i]);
            }
            else{
                strncat(output, &stack[top], 1);
                pop();
                i--;
            }
        }
        
        else{
            strncat(output, &input[i], 1);
        }
    }

    printf("%s", output);
}