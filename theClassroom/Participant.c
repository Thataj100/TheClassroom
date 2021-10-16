//prog 71985 week 06 continuing the classroom

#include "Participant.h"
#include "Student.h"
#include "Participant.h"
#include <stdio.h>

void streamPrintParticipant(FILE*, PARTICIPANT); //private function

/// <summary>
/// creates a participant from a fully formed professor
/// </summary>
/// <param name="Professor">must be a valid professor</param>
/// <returns></returns>
PARTICIPANT CreateParticipantFromProfessor(PROFESSOR Professor)
{
	PARTICIPANT p;
	p.type = PROF;
	p.attendee.professor = Professor;
	return p;
}

/// <summary>
/// creates a participant from a fully formed student
/// </summary>
/// <param name="Student">must be a valid student</param>
/// <returns></returns>
PARTICIPANT CreateParticipantFromStudent(STUDENT Student)
{
	PARTICIPANT p;
	p.type = STUD;
	p.attendee.student = Student;
	return p;
}


void PrintParticipant(PARTICIPANT p)
{
	//printf("Participant: %s, %s\n", p.type, p.attendee);  THIS DONT WORK
	//else if used because it can be expanded to include more types
	//the if is used to seperate by type. Each type can be broken down into its specific values
	
	if (p.type == STUD)
		PrintStudent(p.attendee.student);
	else if (p.type == PROF)
		PrintProfessor(p.attendee.professor);
	else
		fprintf(stderr, "error: unknown participant type\n");
}

bool SaveParticipantToFile(PARTICIPANT P, char Filename[FILENAME_MAX])
{
	FILE* fp;

	//checks if file can be accesseed, if not returns false
	if ((fp = fopen(Filename, "W+")) == NULL) //"W+" Write or Append. Means it can be read from
		return false;

	streamPrintParticipant(fp, P);

	fclose(fp); //closes file
	return true;
}

void streamPrintParticipant(FILE* fp, PARTICIPANT p)
{
	if (p.type == STUD)
	{
		fprintf(fp, "STUD\n");
		streamPrintParticipant(fp, p.attendee.student);
	}
	else if (p.type == PROF)
		streamPrintParticipant(fp, p.attendee.professor);
	else
		fprintf(stderr, "error: unknown participant type cannot be saved\n");
}






/*
STUDENT CreateStudent(char Name[], int StudentNum)
{
	STUDENT s; //'s' only exists within these lines
	strncpy_s(s.name, STUDENTLEN, Name, STUDENTLEN);
	s.studentNum = StudentNum;

	return s; //returns student
}
*/

