#include <iostream>

struct Student
{
    int id;
    char name[10];
    int marks[3];
    float total;
    float percentage;
};
Student stu[3];
int i = 0;

void total(int marks[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += marks[i];
    }
    stu[i].total = sum;
    std::cout << "Total Marks: " << sum << "\n";
}

void percentage(int marks, float total){
    float x = marks/total;
    stu[i].percentage = x*100;
    std::cout << "Percentage: " << (x)*100 << "\n";
}

void get_data()
{
    std::cout << "Name: ";
    std::cin >> stu[i].name;
    std::cout << "\n";

    std::cout << "Id: ";
    std::cin >> stu[i].id;
    std::cout << "\n";

    std::cout << "Marks: ";
    for(int j = 0; j < 3; j++){
        int mark;
        std::cin >> mark;
        stu[i].marks[j] = mark;
    }
    std::cout << "\n";
}

int main()
{
    for(i = 0; i < 3; i++){
        get_data();
        total(stu[i].marks, 3);
        percentage(stu[i].total, 300);
    }
}