#include <iostream>

int main(){
    int id[10];
    for(int *p = id; p < id+10; p++){
        std::cin >> *p;
    }

    for(int *p = id; p < id+10; p++){
        std::cout << *p << " ";
    }
}