#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

class Student : public virtual Person { // Virtual inheritance
private:
    int graduationYear;
    std::string major;
    float GPA;

public:
    Student();
    Student(int ID, const std::string &name, int gradYear, const std::string &major, float GPA);
    int getGraduationYear() const;
    void setGraduationYear(int gradYear);
    std::string getMajor() const;
    void setMajor(const std::string &major);
    float getGPA() const;
    void setGPA(float GPA);
    std::string print() const override;
};

#endif
