#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
#include <memory>
#include "faculty.h"
#include "staff.h"
#include "student.h"
#include "research_assistant.h"
#include "department.h"


class Course {
private:
    int number;
    std::string name;
    Department department;
    std::shared_ptr<Person> teacher;
    std::vector<std::shared_ptr<Person>> students;

public:
    Course();
    Course(int number, const std::string &name, Department department);
    void setTeacher(const std::shared_ptr<Person> &teacher);
    void addStudent(const std::shared_ptr<Person> &student);
    std::string print() const;
    std::string printTeacher() const;
    std::string printStudents() const;
};

#endif
