#include <iostream>

int main()
{
    int arr[10];
	for (int i = 0; i < 10; i++) { // Taking input for array
		int temp;
		std::cin >> temp;
		arr[i] = temp;
	}
	
	int ans[10][2], j = 0; // Initializing the ans array
	
	for(int i = 0; i < 10; i++){
	    int n = arr[i], count = 0; 
	    
	    for(int k = 0; k < i; k++){ // Finding the occurence before the element
	        if(arr[k] == n) count++;
	    }
	    
	    if(count == 0){ // If the count is 0, we add that element in the ans array
	        ans[j][0] = n;
	        ans[j][1] += 1;
	        j++;
	    }
	    else{ // If the count is not 0, then we search for that element, and increment at that index
	        int h;
	        for(h = 0; h < j; h++){
	            if(ans[h][0] == n) break;
	        }
	        ans[h][1] += 1;
	    }
	} 
	
	for(int i = 0; i < j; i++){ // Then print the ans array
	    std::cout << ans[i][0] << ": " << ans[i][1] << "\n";
	}
}