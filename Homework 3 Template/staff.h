#ifndef STAFF_H
#define STAFF_H

#include "person.h"
#include "department.h"


class Staff : public virtual Person { // Virtual inheritance
private:
    std::string title;

public:
    Staff();
    Staff(int ID, const std::string &name, float salary, Department department, const std::string &title);
    std::string getTitle() const;
    void setTitle(const std::string &title);
    std::string print() const override;
};

#endif
