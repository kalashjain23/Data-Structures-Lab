#include <iostream>

int main(){

    int arr[] = {1,2,3,4,2,2,4,2,6,2};
    std::cout << "The array: ";
    for(int n : arr){ // Displays the initial array
        std::cout << n << " ";
    }

    std::cout << "\nEnter the number to remove from the array: ";
    int n;
    std::cin >> n; // Asks for the element that needs to be removed

    int count = 0; // Counting the number of instances of that element and shifting the elements accordingly
    for(int i = 0; i < 10; i++){
        if(i >= 10 - count){ // The leftover indexes at the end will be equal to 0
            arr[i] = 0;
            continue;
        }
        else if(arr[i+count] == n){ // If the upcoming element is the target, then we will skip it
            count++;
            i--;
            continue;
        }
        arr[i] = arr[i+count]; // Giving the element its right position
    }

    std::cout << "The final array: ";
    for(int k : arr){ // Printing out the final array
        std::cout << k << " ";
    }

}