//prog71985 - Week5 - initial write of student header
//Alistair Campbell
//October 6


#include "Student.h" //note the quotation marks. Includes the header file
#include <stdio.h>
#include <string.h>

STUDENT CreateStudent(char Name[], int StudentNum)
{
	STUDENT s; //'s' only exists within these lines
	strncpy_s(s.name, STUDENTLEN, Name, STUDENTLEN);
	s.studentNum = StudentNum;

	return s; //returns student
}

void PrintStudent(STUDENT s)
{
	printf("Student: %s, %d\n", s.name, s.studentNum);
}

void streamPrintStudent(FILE* fp, STUDENT s)
{
	fprintf(fp, "%s\n", s.name);
	fprintf(fp, "%d\n", s.studentNum);
}