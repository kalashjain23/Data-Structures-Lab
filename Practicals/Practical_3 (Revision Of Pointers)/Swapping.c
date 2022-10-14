/* Write a program to perform swapping of two numbers by passing addresses of the variables to 
the function. */

#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 5;
    int b = 10;

    swap(&a,&b);

    printf("a = %d", a);
    printf("b = %d", b);
}