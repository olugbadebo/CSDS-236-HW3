#include "research_assistant.h"
#include <sstream>

// Default Constructor
ResearchAssistant::ResearchAssistant() : Student(), researchArea("Undefined") {}

// Staff-based Constructor
ResearchAssistant::ResearchAssistant(const std::string& area, const std::string& title, Department dep, double salary, int id, const std::string& name)
    : Student(id, name, 0, "Undefined", -1.0f), researchArea(area) {}

// Student-based Constructor
ResearchAssistant::ResearchAssistant(const std::string& area, const std::string& major, float gpa, int gradYear, int id, const std::string& name)
    : Student(id, name, gradYear, major, gpa), researchArea(area) {}

// Getter and Setter
std::string ResearchAssistant::getResearchArea() const {
    return researchArea;
}

void ResearchAssistant::setResearchArea(const std::string& area) {
    researchArea = area;
}

// Print Method
std::string ResearchAssistant::print() const {
    std::ostringstream oss;
    oss << "Research Area: " << researchArea << ", " << Student::print();
    return oss.str();
}
