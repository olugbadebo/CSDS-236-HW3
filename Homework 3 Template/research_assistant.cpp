#include "research_assistant.h"

ResearchAssistant::ResearchAssistant()
    : Student(), Staff(), researchArea("") {}

ResearchAssistant::ResearchAssistant(const std::string &area, const std::string &major, float gpa, int gradYear, int id, const std::string &name)
    : Student(id, name, gradYear, major, gpa), Staff(), researchArea(area) {}

ResearchAssistant::ResearchAssistant(const std::string &area, const std::string &title, Department dep, float salary, int id, const std::string &name)
    : Staff(id, name, salary, dep, title), Student(), researchArea(area) {}

std::string ResearchAssistant::getResearchArea() const {
    return researchArea;
}

void ResearchAssistant::setResearchArea(const std::string &area) {
    this->researchArea = area;
}

std::string ResearchAssistant::print() const {
    if (Student::getGraduationYear() > 0 && Student::getGPA() >= 0.0) {
        // RA as Student
        return researchArea + " - " + Student::print();
    } else if (!Staff::getTitle().empty() && Staff::getSalary() > 0.0) {
        // RA as Staff
        return researchArea + " - " + Staff::print();
    } else {
        return "Error: Invalid ResearchAssistant!";
    }
}
