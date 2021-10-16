//prog71985 - Week5 - initial write of student header
//Alistair Campbell
//October 6

#pragma once //preprocessor directive, this file only gets run once

#define STUDENTLEN 50 //max length

typedef struct student //declaration of a complex datatype named "student". Contains multiple bits of data
{
	char name[STUDENTLEN]; //statically defined char array
	int studentNum; //Student number
} STUDENT;

STUDENT CreateStudent(char[], int); //returns student, give student name and student number
void PrintStudent(STUDENT); //passes student out, no return value

//everything typedef is capitals (STUDENT)
//private names are lowercase
//all caps cannot be changed outside of the header file
//methods available for all users start with capitals (PrintStudent, CreateStudent)