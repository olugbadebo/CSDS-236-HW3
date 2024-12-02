#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
protected:
    int ID;
    std::string name;

public:
    Person();
    Person(int ID, const std::string &name);
    int getID() const;
    void setID(int ID);
    std::string getName() const;
    void setName(const std::string &name);
    virtual std::string print() const;
    virtual ~Person() = default;
};

#endif
