
#pragma once

//a person involved with the class - aka a prof or student

/*
* A properly formatted .h and .c of a participant
*	A participant is a struct that contains:
*		a union of student or professor and
*		a type (student or prof)
* Create functions for
*	CreatParticipantFromProfessor(professor),
*	CreateParticipantFromProfessor(student), and
*	PrintParticipant(participant)
* and
*	SaveParticipantToFile(PARTICIPANT, char[]);
*/

/* Struct - size of struct is total of all attribute sizes stored within (ex. 4 + 50 + ...)
*	attribute 1 (4 bytes)
*	attribute 2 (50 bytes)
*	...
* 
* Union - shares a single memory location for a single variable. Size of union is the size of the largest datatype
*	datatype 1 (4 bytes)
*	datatype 2 (54 bytes)
*	datatype 3 (8 bytes)
*/

#include "Student.h"
#include "Professor.h"
#include <stdio.h>
#include <stdbool.h>

typedef union attendee
{
	STUDENT student;
	PROFESSOR professor;
} ATTENDEE;

typedef enum AttendeeType { STUD, PROF } TYPE; //creates enumeration for type of attendee

typedef struct participant
{
	TYPE type; //stud or prof
	ATTENDEE attendee; //data stored
} PARTICIPANT;

PARTICIPANT CreateParticipantFromProfessor(PROFESSOR);
PARTICIPANT CreateParticipantFromStudent(STUDENT);
void PrintParticipant(PARTICIPANT);

bool SaveParticipantToFile(PARTICIPANT, char[]);