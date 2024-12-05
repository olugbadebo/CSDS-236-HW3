#ifndef STAFF_H
#define STAFF_H

#include "student.h"
#include "employee.h"

class Staff : public Student, public Employee {
private:
    std::string title;

public:
    // Constructors
    Staff();
    Staff(int id, const std::string& name, float salary, Department dep, const std::string& title);

    // Getter and Setter
    std::string getTitle() const;
    void setTitle(const std::string& title);

    // Print Method
    std::string print() const override;
};

#endif // STAFF_H
