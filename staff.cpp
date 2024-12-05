#include "staff.h"
#include <sstream>

// Default Constructor
Staff::Staff() : Student(), Employee(), title("Undefined") {}

// Full Constructor
Staff::Staff(int id, const std::string& name, float salary, Department dep, const std::string& title)
    : Student(id, name, 0, "Undefined", -1.0f), Employee(id, name, salary, dep), title(title) {}

// Getter and Setter
std::string Staff::getTitle() const { return title; }
void Staff::setTitle(const std::string& title) { this->title = title; }

// Print Method
std::string Staff::print() const {
    std::ostringstream oss;
    oss << Employee::print() << ", Title: " << title;
    return oss.str();
}
