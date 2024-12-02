#include "staff.h"

Staff::Staff() : Employee(), title("") {}

Staff::Staff(int ID, const std::string &name, float salary, Department department, const std::string &title)
    : Employee(ID, name, salary, department), title(title) {}

std::string Staff::getTitle() const {
    return title;
}

void Staff::setTitle(const std::string &title) {
    this->title = title;
}

std::string Staff::print() const {
    return title + " - " + Employee::print();
}
