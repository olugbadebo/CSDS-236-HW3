#ifndef RESEARCH_ASSISTANT_H
#define RESEARCH_ASSISTANT_H

#include "student.h"
#include "staff.h"
#include "department.h"

class ResearchAssistant : public Student, public Staff {
private:
    std::string researchArea;

public:
    ResearchAssistant();
    ResearchAssistant(const std::string &area, const std::string &major, float gpa, int gradYear, int id, const std::string &name);
    ResearchAssistant(const std::string &area, const std::string &title, Department dep, float salary, int id, const std::string &name);
    std::string getResearchArea() const;
    void setResearchArea(const std::string &area);
    std::string print() const override;
};

#endif
