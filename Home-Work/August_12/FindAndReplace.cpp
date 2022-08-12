#include <iostream>

int main()
{

    std::cout << "Enter the elements in the array: ";
    int arr[10];
    for(int i = 0; i < 10; i++) // Getting the elements of the array from the user
    { 
        int temp;
        std::cin >> temp;
        arr[i] = temp;
    }

    int number, to_replace; // Getting the number to be replaced and the number that will replace
    std::cout << "Enter the number you want to replace: ";
    std::cin >> to_replace;
    std::cout << "Enter the number you want to replace that number with: ";
    std::cin >> number;

    for(int i = 0; i < 10; i++)
    {
        if(arr[i] == to_replace) // Checking for the number to be replaced
        {
            arr[i] = number;
        }
    }

    std::cout << "Modified array: ";
    for(int n:arr) // Printing the modified array
    {
        std::cout << n << " ";
    }
    std::cout << "\n";

}