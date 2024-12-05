#ifndef FACULTY_H
#define FACULTY_H

#include "employee.h"

class Faculty : public Employee {
private:
    std::string title;
    std::string researchFocus;

public:
    // Constructors
    Faculty();
    Faculty(int id, const std::string& name, float salary, Department dep, const std::string& title, const std::string& researchFocus);

    // Getters and Setters
    std::string getTitle() const;
    void setTitle(const std::string& title);

    std::string getResearchFocus() const;
    void setResearchFocus(const std::string& focus);

    // Print method
    std::string print() const override;
};

#endif // FACULTY_H
