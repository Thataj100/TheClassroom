//prog 71985 - 

#include "Professor.h"

PROFESSOR CreateProfessor(char Name[], char Department[])
{
	PROFESSOR p;
	strncpy_s(p.name, PROFESSORLEN, Name, PROFESSORLEN);
	strncpy_s(p.department, DEPARTMENTLEN, Department, DEPARTMENTLEN);

	return p;
}

void PrintProfessor(PROFESSOR p)
{

}