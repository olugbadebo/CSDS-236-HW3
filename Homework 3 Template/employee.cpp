#include "employee.h"

Employee::Employee() : Person(), salary(0.0), department(Department::None) {}

Employee::Employee(int ID, const std::string &name, float salary, Department department)
    : Person(ID, name), salary(salary), department(department) {}

float Employee::getSalary() const {
    return salary;
}

void Employee::setSalary(float salary) {
    this->salary = salary;
}

Department Employee::getDepartment() const {
    return department;
}

void Employee::setDepartment(Department department) {
    this->department = department;
}

std::string Employee::print() const {
    return Person::print() + ", Salary: " + std::to_string(salary);
}
