#include "faculty.h"
#include <sstream>

// Default Constructor
Faculty::Faculty() : Employee(), title("Undefined"), researchFocus("Undefined") {}

// Full Constructor
Faculty::Faculty(int id, const std::string& name, float salary, Department dep, const std::string& title, const std::string& researchFocus)
    : Employee(id, name, salary, dep), title(title), researchFocus(researchFocus) {}

// Getters and Setters
std::string Faculty::getTitle() const { return title; }
void Faculty::setTitle(const std::string& title) { this->title = title; }

std::string Faculty::getResearchFocus() const { return researchFocus; }
void Faculty::setResearchFocus(const std::string& focus) { this->researchFocus = focus; }

// Print Method
std::string Faculty::print() const {
    std::ostringstream oss;
    oss << Employee::print() << ", Title: " << title << ", Research Focus: " << researchFocus;
    return oss.str();
}
