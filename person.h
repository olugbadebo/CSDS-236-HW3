#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
protected:
    int ID;
    std::string name;

public:
    // Constructors
    Person();
    Person(int id, const std::string& name);

    // Virtual destructor for polymorphism
    virtual ~Person();

    // Getters and Setters
    int getID() const;
    void setID(int id);

    std::string getName() const;
    void setName(const std::string& name);

    // Virtual print method for polymorphism
    virtual std::string print() const = 0;
};

#endif // PERSON_H
