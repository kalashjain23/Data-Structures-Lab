// Write a C program to perform linear and binary search

#include <stdio.h>

int linear_search(int arr[], int size, int element){
    for(int i = 0; i < size; i++){
        if(arr[i] == element) return i;
    }
    return -1;
}

int binary_search(int arr[], int size, int element){
    int low = 0;
    int high = size - 1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == element) return mid;
        else if(arr[mid] > element) high = mid -1;
        else low = mid + 1;
    }
    return -1;
}

int main(){

    int arr[] = {4,5,7,2,8,5,2};
    int arr_2[] = {3,4,6,8,10,14,18};
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    int size_arr_2 = sizeof(arr_2)/sizeof(arr_2[0]);

    // Finding an element in an array using linear search
    int index_arr = linear_search(arr, size_arr, 2);
    // Finding an element in an array using binary search
    int index_arr_2 = binary_search(arr_2, size_arr_2, 10);

    printf("Element %d is present at location %d in arr\n", 2, index_arr);
    printf("Element %d is present at location %d in arr_2\n", 10, index_arr_2);
}