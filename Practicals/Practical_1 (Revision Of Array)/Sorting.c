// Write a C program to perform bubble sort, insertion sort and selection sort.

#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[j-1] > arr[j]){
                swap(&arr[j], &arr[j-1]);
            }
        }
    }

    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

void selection_sort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        int min = i;
        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(&arr[i], &arr[min]);
    }

    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

void insertion_sort(int arr[], int size){
    for(int i = 1; i < size; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    
    int size = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];

    for(int i = 0; i < size; i++){
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }

    int option;
    printf("Type 1 for bubble sort, 2 for selection sort and 3 for insertion sort: ");
    scanf("%d", &option);

    switch(option){
        case 1:
            bubble_sort(arr, size);
            break;
        case 2:
            selection_sort(arr, size);
            break;
        case 3:
            insertion_sort(arr, size);
            break;
        default:
            printf("Invalid option.");
    }

}