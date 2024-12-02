#include "person.h"

Person::Person() : ID(0), name("") {}

Person::Person(int ID, const std::string &name) : ID(ID), name(name) {}

int Person::getID() const {
    return ID;
}

void Person::setID(int ID) {
    this->ID = ID;
}

std::string Person::getName() const {
    return name;
}

void Person::setName(const std::string &name) {
    this->name = name;
}

std::string Person::print() const {
    return name + " (" + std::to_string(ID) + ")";
}
