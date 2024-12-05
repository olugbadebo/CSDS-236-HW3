#include "course.h"
#include "staff.h"
#include <sstream>

// Default Constructor
Course::Course() : number(0), name("Undefined"), department(Department::None), teacher(nullptr) {}

// Full Constructor
Course::Course(int number, const std::string& name, Department dep)
    : number(number), name(name), department(dep), teacher(nullptr) {}

// Getters and Setters
int Course::getNumber() const { return number; }
void Course::setNumber(int number) { this->number = number; }

std::string Course::getName() const { return name; }
void Course::setName(const std::string& name) { this->name = name; }

Department Course::getDepartment() const { return department; }
void Course::setDepartment(Department dep) { department = dep; }

// Set Teacher
bool Course::setTeacher(Person* person) {
    // Check if the teacher is a Staff with title "Instructor"
    if (auto* staff = dynamic_cast<Staff*>(person)) {
        if (staff->getTitle() != "Instructor") {
            return false;
        }
    }
    teacher = person;
    return true;
}

// Get Teacher
Person* Course::getTeacher() const {
    return teacher;
}

// Add Student
bool Course::addStudent(Person* person) {
    // Ensure the student isn't the teacher
    if (teacher && teacher->getID() == person->getID()) {
        return false;
    }
    students.push_back(person);
    return true;
}

// Get Students
std::vector<Person*> Course::getStudents() const {
    return students;
}

// Print Course Details
std::string Course::print() const {
    std::ostringstream oss;
    oss << "Course: " << name << " (" << number << "), Department: " << static_cast<int>(department);
    return oss.str();
}

// Print Teacher Details
std::string Course::printTeacher() const {
    if (!teacher) {
        return "No teacher assigned.";
    }
    return teacher->print();
}

// Print Students Details
std::string Course::printStudents() const {
    if (students.empty()) {
        return "No students enrolled.";
    }
    std::ostringstream oss;
    for (const auto& student : students) {
        oss << student->print() << "\n";
    }
    return oss.str();
}
