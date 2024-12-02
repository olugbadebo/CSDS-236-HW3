#include <iostream>
#include <memory>
#include "person.h"
#include "employee.h"
#include "student.h"
#include "faculty.h"
#include "staff.h"
#include "research_assistant.h"
#include "course.h"

// University Department Model

int main() {
    // Faculty Members
    auto cenk = std::make_shared<Faculty>(12346, "Murat Cenk Cavusoglu", 50000.0, Department::CS, "Professor", "Surgical Robotics");
    auto orhan = std::make_shared<Faculty>(12347, "Orhan Ozguner", 50000.0, Department::CS, "Adjunct Professor", "Surgical Robotics");
    auto wyatt = std::make_shared<Faculty>(12348, "Wyatt Newman", 50000.0, Department::EE, "Professor", "Surgical Robotics");
    auto mehmet = std::make_shared<Faculty>(12349, "Mehmet Koyuturk", 50000.0, Department::CS, "Professor", "Bioinformatics");

    // Staff Members
    auto cynthia = std::make_shared<Staff>(12350, "Cynthia Hatcher", 20000.0, Department::CS, "Assistant to the Chair");
    auto david = std::make_shared<Staff>(12351, "David Jarvi", 20000.0, Department::CS, "Technician");
    auto julie = std::make_shared<Staff>(12352, "Julie Martinez", 30000.0, Department::BME, "Regulatory Compliance Director");

    // Students
    auto tom = std::make_shared<Student>(12360, "Tom Shkurti", 2022, "Computer Science", 4.0);
    auto iayn = std::make_shared<Student>(12361, "Iayn Bogdanov", 1974, "Computer Science", 3.5);
    auto test_student = std::make_shared<Student>();

    // Research Assistants
    auto ammar = std::make_shared<ResearchAssistant>("Robotics", "Computer Science", 3.0, 2022, 12362, "Ammar Nahari");
    auto russel = std::make_shared<ResearchAssistant>("Robotics", "Lab Manager", Department::CS, 1000.0, 12375, "Russel Jackson");
    auto pod_person = std::make_shared<ResearchAssistant>("Robotics", "Consulting Engineer", Department::CS, 1000.0, 12376, "Hugh Mann");
    pod_person->setGPA(5.0); // Invalid GPA for testing

    // Course
    auto intro = std::make_shared<Course>(297, "Intro to C/C++", Department::CS);
    intro->setTeacher(russel);
    intro->addStudent(tom);
    intro->addStudent(iayn);
    intro->addStudent(ammar);

    // Print Faculty
    std::cout << "FACULTY:" << "\n";
    std::cout << cenk->print() << "\n";
    std::cout << orhan->print() << "\n";
    std::cout << wyatt->print() << "\n";
    std::cout << mehmet->print() << "\n";

    // Print Staff
    std::cout << "STAFF:" << "\n";
    std::cout << cynthia->print() << "\n";
    std::cout << david->print() << "\n";
    std::cout << julie->print() << "\n";

    // Print Students
    std::cout << "STUDENTS:" << "\n";
    std::cout << tom->print() << "\n";
    std::cout << iayn->print() << "\n";
    std::cout << test_student->print() << "\n";

    // Print Research Assistants
    std::cout << "RA's:" << "\n";
    std::cout << ammar->print() << "\n";
    std::cout << russel->print() << "\n";
    std::cout << pod_person->print() << "\n";

    // Print Course
    std::cout << "COURSE:" << "\n";
    std::cout << intro->print() << "\n";
    std::cout << intro->printTeacher() << "\n";
    std::cout << intro->printStudents() << "\n";

    return 0;
}
