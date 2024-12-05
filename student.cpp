#include "student.h"
#include <sstream>

// Default Constructor
Student::Student() : Person(), gradYear(0), major("Undefined"), GPA(-1.0f) {}

// Full Constructor
Student::Student(int id, const std::string& name, int gradYear, const std::string& major, float GPA)
    : Person(id, name), gradYear(gradYear), major(major), GPA(GPA) {}

// Getters and Setters
int Student::getGradYear() const { return gradYear; }
void Student::setGradYear(int gradYear) { this->gradYear = gradYear; }

std::string Student::getMajor() const { return major; }
void Student::setMajor(const std::string& major) { this->major = major; }

float Student::getGPA() const { return GPA; }
void Student::setGPA(float GPA) { this->GPA = GPA; }

// Print Method
std::string Student::print() const {
    std::ostringstream oss;
    oss << Person::print() << ", Grad Year: " << gradYear << ", Major: " << major << ", GPA: " << GPA;
    return oss.str();
}
