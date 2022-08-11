#include <iostream>

struct Employee
{
    int id;
    int salary;
    std::string name;
    std::string designation;
};
Employee emp[3];
int i = 0;

void get_data(){
    std::cout << "Enter your id: ";
    std::cin >> emp[i].id;

    std::cout << "Enter your salary: ";
    std::cin >> emp[i].salary;

    std::cout << "Enter your name: ";
    std::cin >> emp[i].name;

    std::cout << "Enter your designation: ";
    std::cin >> emp[i].designation;
}

int main()
{
    for(i = 0; i < 3; i++){
        get_data();
    }
    
    std::cout << "id    salary    name    designation\n";
    for(Employee employee:emp){
        std::cout << employee.id << "    " << employee.salary << "   " << employee.name << "   " << employee.designation << "\n";
    }
}