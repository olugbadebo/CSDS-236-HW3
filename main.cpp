#include <iostream>

#include "person.h"
#include "employee.h"
#include "student.h"
#include "faculty.h"
#include "staff.h"
#include "research_assistant.h"
#include "course.h"


int main(){

	Faculty cenk = Faculty(12346, "Murat Cenk Cavusoglu", 50000., Department::CS, "Professor", "Surgical Robotics");
	Faculty orhan = Faculty(12347, "Orhan Ozguner", 50000., Department::CS, "Adjunct Professor", "Surgical Robotics");
	Faculty wyatt = Faculty(12348, "Wyatt Newman", 50000., Department::EE, "Professor", "Surgical Robotics");
	Faculty mehmet = Faculty(12349, "Mehmet Koyuturk", 50000., Department::CS, "Professor", "Bioinformatics");

	Staff cynthia = Staff(12350, "Cynthia Hatcher", 20000., Department::CS, "Assistant to the Chair");
	Staff david = Staff(12351, "David Jarvi", 20000., Department::CS, "Technician");
	Staff julie = Staff(12352, "Julie Martinez", 30000., Department::BME, "Regulatory Compliance Director");


	Student tom = Student(12360, "Tom Shkurti", 2022, "Computer Science", 4.0);
	Student iayn = Student(12361, "Iayn Bogdanov", 1974, "Computer Science", 3.5);
	Student test_student = Student();

	ResearchAssistant ammar = ResearchAssistant("Robotics", "Computer Science", 3.0, 2022, 12362, "Ammar Nahari");
	ResearchAssistant russel = ResearchAssistant("Robotics", "Lab Manager", Department::CS, 1000., 12375, "Russel Jackson");
	ResearchAssistant pod_person = ResearchAssistant("Robotics", "Consulting Engineer", Department::CS, 1000., 12375, "Hugh Mann");
	pod_person.setGPA(5.0);

	Course intro(297, "Intro to C/C++", Department::CS);
	intro.setTeacher(&russel);
	intro.addStudent(&tom);
	intro.addStudent(&iayn);
	intro.addStudent(&russel);
	intro.addStudent(&orhan);

	std::cout << "FACULTY:" << "\n";
	std::cout << cenk.print() << "\n";
	std::cout << orhan.print() << "\n";
	std::cout << wyatt.print() << "\n";
	std::cout << mehmet.print() << "\n";

	std::cout << "STAFF:" << "\n";
	std::cout << cynthia.print() << "\n";
	std::cout << david.print() << "\n";
	std::cout << julie.print() << "\n";

	std::cout << "STUDENTS:" << "\n";
	std::cout << tom.print() << "\n";
	std::cout << iayn.print() << "\n";
	std::cout << test_student.print() << "\n";

	std::cout << "RA's:" << "\n";
	std::cout << ammar.print() << "\n";
	std::cout << russel.print() << "\n";
	std::cout << pod_person.print() << "\n";

	std::cout << "COURSE:" << "\n";
	std::cout << intro.print() << "\n";
	std::cout << intro.printTeacher() << "\n";
	std::cout << intro.printStudents() << "\n";

	return 0;
}
