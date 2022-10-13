// Write a program in C that obtains the minimum and maximum element of the array.
// Modify this program to give the second largest and second smallest element of the array.

#include <stdio.h>

int main(){
    int size = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];
    int prev_min = min, prev_max = max;
    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            if(prev_min != min) prev_min = min;
            min = arr[i];
        }
        if(arr[i] > max){
            if(prev_max != max) prev_max = max;
            max = arr[i];
        }
    }

    printf("The minimum element of the array is: %d", min);
    printf("The maximum element of the array is: %d", max);

    printf("The second largest element of the array is %d", prev_max);
    printf("The second smallest element of the array is %d", prev_min);
}