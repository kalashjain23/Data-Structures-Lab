#include <iostream>

int main() {
	int arr[10]; // Initialising the array
	for (int i = 0; i < 10; i++) { // Taking the elements of the array from the user
		int temp;
		std::cin >> temp;
		arr[i] = temp;
	}

    std::cout << "Numbers having 9 in them are: ";
	for (int n : arr) { // Looping through the array
		int temp = n;
		while (temp > 0) { // checking if there's a 9 in the element
			int rem = temp % 10;
			temp /= 10;
			if (rem == 9) { // If there's a 9 in the element, we print the number and move on to the next element
				std::cout << n << " ";
				break;
			}
		}
	}
}