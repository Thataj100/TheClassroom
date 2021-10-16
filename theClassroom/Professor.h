

#pragma once

#define PROFESSORLEN 50 //max length
#define DEPARTMENTLEN 50

typedef struct professor
{
	char name[PROFESSORLEN];
	char department[DEPARTMENTLEN];
} PROFESSOR;

PROFESSOR CreateProfessor(char[], char[]); //returns student, gives student name and student number
void PrintProfessor(PROFESSOR); //passes student out, no return value