#include "course.h"
#include <sstream>

Course::Course() : number(0), name(""), department(Department::None), teacher(nullptr) {}

Course::Course(int number, const std::string &name, Department department)
    : number(number), name(name), department(department), teacher(nullptr) {}

void Course::setTeacher(const std::shared_ptr<Person> &teacher) {
    teacher->getName(); // Check teacher validity
    this->teacher = teacher;
}

void Course::addStudent(const std::shared_ptr<Person> &student) {
    if (teacher && teacher->getID() == student->getID()) return; // Prevent teacher as student
    students.push_back(student);
}

std::string Course::print() const {
    std::ostringstream oss;
    oss << "Course: " << name << " (" << number << ")";
    return oss.str();
}

std::string Course::printTeacher() const {
    if (teacher) {
        return "Teacher: " + teacher->print();
    }
    return "No teacher assigned.";
}

std::string Course::printStudents() const {
    std::ostringstream oss;
    if (students.empty()) {
        return "No students enrolled.";
    }
    oss << "Students:\n";
    for (const auto &student : students) {
        oss << "- " << student->print() << "\n";
    }
    return oss.str();
}
