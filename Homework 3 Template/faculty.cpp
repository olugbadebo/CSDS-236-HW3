#include "faculty.h"

Faculty::Faculty()
    : Employee(), title(""), researchFocus("") {}

Faculty::Faculty(int ID, const std::string &name, float salary, Department department,
                 const std::string &title, const std::string &researchFocus)
    : Employee(ID, name, salary, department), title(title), researchFocus(researchFocus) {}

std::string Faculty::getTitle() const {
    return title;
}

void Faculty::setTitle(const std::string &title) {
    this->title = title;
}

std::string Faculty::getResearchFocus() const {
    return researchFocus;
}

void Faculty::setResearchFocus(const std::string &researchFocus) {
    this->researchFocus = researchFocus;
}

std::string Faculty::print() const {
    return title + " (" + researchFocus + ") - " + Employee::print();
}
