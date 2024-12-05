#ifndef COURSE_H
#define COURSE_H

#include "person.h"
#include "department.h"
#include <vector>
#include <string>

class Course {
private:
    int number;
    std::string name;
    Department department;
    Person* teacher;  // Pointer to teacher
    std::vector<Person*> students;  // Vector of Person pointers

public:
    // Constructors
    Course();
    Course(int number, const std::string& name, Department dep);

    // Getters and Setters
    int getNumber() const;
    void setNumber(int number);

    std::string getName() const;
    void setName(const std::string& name);

    Department getDepartment() const;
    void setDepartment(Department dep);

    bool setTeacher(Person* person);
    Person* getTeacher() const;

    bool addStudent(Person* person);
    std::vector<Person*> getStudents() const;

    // Print methods
    std::string print() const;
    std::string printTeacher() const;
    std::string printStudents() const;
};

#endif // COURSE_H
