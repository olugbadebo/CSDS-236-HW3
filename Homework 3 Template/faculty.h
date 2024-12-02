#ifndef FACULTY_H
#define FACULTY_H

#include "employee.h"
#include "department.h"


class Faculty : public Employee {
private:
    std::string title;
    std::string researchFocus;

public:
    Faculty();
    Faculty(int ID, const std::string &name, float salary, Department department,
            const std::string &title, const std::string &researchFocus);
    std::string getTitle() const;
    void setTitle(const std::string &title);
    std::string getResearchFocus() const;
    void setResearchFocus(const std::string &researchFocus);
    std::string print() const override;
};

#endif
