#include "person.h"

#include "person.h"

// Default Constructor
Person::Person() : ID(0), name("Undefined") {}

// Full Constructor
Person::Person(int id, const std::string& name) : ID(id), name(name) {}

// Destructor
Person::~Person() {}

// Getters and Setters
int Person::getID() const { return ID; }
void Person::setID(int id) { ID = id; }

std::string Person::getName() const { return name; }
void Person::setName(const std::string& name) { this->name = name; }

// Print Method
std::string Person::print() const {
    return "Name: " + name + ", ID: " + std::to_string(ID);
}
