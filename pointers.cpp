#include <iostream>

int main(){
    std::string names[10];
    for(int i = 0; i < 10; i++){
        std::cin >> names[i];
    }

    for(int i = 0; i < 10; i++){
        std::cout << names[i] << " ";
    }
}