#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "person.h"
#include "department.h"

class Employee : public Person {
protected:
    float salary;
    Department dep;

public:
    // Constructors
    Employee();
    Employee(int id, const std::string& name, float salary, Department dep);

    // Getters and Setters
    float getSalary() const;
    void setSalary(float salary);

    Department getDepartment() const;
    void setDepartment(Department dep);

    // Print method
    std::string print() const override;
};

#endif // EMPLOYEE_H
