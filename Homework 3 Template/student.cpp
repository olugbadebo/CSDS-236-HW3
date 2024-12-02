#include "student.h"

Student::Student() : Person(), graduationYear(0), major(""), GPA(-1.0) {}

Student::Student(int ID, const std::string &name, int gradYear, const std::string &major, float GPA)
    : Person(ID, name), graduationYear(gradYear), major(major), GPA(GPA) {}

int Student::getGraduationYear() const {
    return graduationYear;
}

void Student::setGraduationYear(int gradYear) {
    this->graduationYear = gradYear;
}

std::string Student::getMajor() const {
    return major;
}

void Student::setMajor(const std::string &major) {
    this->major = major;
}

float Student::getGPA() const {
    return GPA;
}

void Student::setGPA(float GPA) {
    this->GPA = GPA;
}

std::string Student::print() const {
    return Person::print() + ", " + major + " Major, GPA: " + std::to_string(GPA) +
           ", Graduation Year: " + std::to_string(graduationYear);
}
