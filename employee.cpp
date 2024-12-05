#include "employee.h"
#include <sstream>

// Default Constructor
Employee::Employee() : Person(), salary(0.0f), dep(Department::None) {}

// Full Constructor
Employee::Employee(int id, const std::string& name, float salary, Department dep)
    : Person(id, name), salary(salary), dep(dep) {}

// Getters and Setters
float Employee::getSalary() const { return salary; }
void Employee::setSalary(float salary) { this->salary = salary; }

Department Employee::getDepartment() const { return dep; }
void Employee::setDepartment(Department dep) { this->dep = dep; }

// Print Method
std::string Employee::print() const {
    std::ostringstream oss;
    oss << Person::print() << ", Department: " << static_cast<int>(dep) << ", Salary: $" << salary;
    return oss.str();
}
