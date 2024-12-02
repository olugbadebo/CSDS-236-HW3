#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "person.h"
#include "department.h"


// enum class Department { CS, EE, MATH, BME, None };

class Employee : public Person {
protected:
    float salary;
    Department department;

public:
    Employee();
    Employee(int ID, const std::string &name, float salary, Department department);
    float getSalary() const;
    void setSalary(float salary);
    Department getDepartment() const;
    void setDepartment(Department department);
    virtual std::string print() const override;
};

#endif
