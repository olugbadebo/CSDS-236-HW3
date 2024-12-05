#ifndef RESEARCH_ASSISTANT_H
#define RESEARCH_ASSISTANT_H

#include "student.h"
#include "department.h"

class ResearchAssistant : public Student {
private:
    std::string researchArea;

public:
    // Constructors
    ResearchAssistant();
    ResearchAssistant(const std::string& area, const std::string& major, float gpa, int gradYear, int id, const std::string& name);
    ResearchAssistant(const std::string& area, const std::string& title, Department dep, double salary, int id, const std::string& name);

    // Getter and Setter
    std::string getResearchArea() const;
    void setResearchArea(const std::string& area);

    // Print method
    std::string print() const override;
};

#endif // RESEARCH_ASSISTANT_H
