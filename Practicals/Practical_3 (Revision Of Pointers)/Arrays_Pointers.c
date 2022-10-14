// Write a program in C to implement arrays of pointers and pointers to arrays.

#include <stdio.h>

int main(){
    int a[5] = {1, 2, 3, 4, 5};
    int *p[5];
    for(int i = 0; i < 5; i++){
        p[i] = &a[i];
    }
    for(int i = 0; i < 5; i++){
        printf("%d ",*p[i]);
    }
    printf("%d\n",*p[0]);
    printf("%d\n",*p[1]);
    printf("%d\n",*p[2]);
    printf("%d\n",*p[3]);
    printf("%d\n",*p[4]);
}
