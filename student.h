#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

class Student : public Person {
protected:
    int gradYear;
    std::string major;
    float GPA;

public:
    // Constructors
    Student();
    Student(int id, const std::string& name, int gradYear, const std::string& major, float GPA);

    // Getters and Setters
    int getGradYear() const;
    void setGradYear(int gradYear);

    std::string getMajor() const;
    void setMajor(const std::string& major);

    float getGPA() const;
    void setGPA(float GPA);

    // Print method
    std::string print() const override;
};

#endif // STUDENT_H
