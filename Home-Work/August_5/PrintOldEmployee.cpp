#include <iostream>

struct Date{
    int date;
    std::string month;
    int year;
};

struct Employee{
    std::string name;
    int salary;
    Date birth;
    Date joining;
    std::string designation;
};
Employee emp[3];

void get_data(Employee* employee){
    int n;
    std::string s;

    std::cout << "Enter name: ";
    std::cin >> s;
    employee->name = s;

    std::cout << "Enter salary: ";
    std::cin >> n;
    employee->salary = n;

    std::cout << "Enter birth date: ";
    std::cin >> n;
    employee->birth.date = n;
    std::cout << "Enter birth month: ";
    std::cin >> s;
    employee->birth.month = s;
    std::cout << "Enter birth year: ";
    std::cin >> n;
    employee->birth.year = n;

    std::cout << "Enter joining date: ";
    std::cin >> n;
    employee->joining.date = n;
    std::cout << "Enter joining month: ";
    std::cin >> s;
    employee->joining.month = s;
    std::cout << "Enter joining year: ";
    std::cin >> n;
    employee->joining.year = n;

    std::cout << "Enter designation: ";
    std::cin >> s;
    employee->designation = s;
}

void get_date(Date* today){
    int date, year;
    std::string month;
    std::cin >> date >> month >> year;
    today->date = date;
    today->month = month;
    today->year = year;
}

int main(){
    Date today;
    get_date(&today);

    for(Employee employee:emp){
        get_data(&employee);
        if(today.year - employee.joining.year >= 10){ 
            std::cout << "Congratulations " << employee.name << ", you've completed more than 10 years in this company!!\n";
        }
    }
}