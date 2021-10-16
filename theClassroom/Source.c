//prog71985


#include "Student.h"
#include "Professor.h"
#include "Participant.h"

int main(void)
{
	//CLASSROOM prog71985 = ("prog prin");


	//excersice out student ADT
	STUDENT bobby = CreateStudent("bobby h", 12345678);
	PARTICIPANT p0 = CreateParticipantFromStudent(bobby);
	//AddParticipantToClassRoom(bobby, prog71985)


	//excercise out professor ADT
	PROFESSOR steve = CreateProfessor("steve h", "BCS");
	PARTICIPANT p1 = CreateParticipantFromProfessor(steve);
	PrintProfessor(steve);
	//AddParticipantToClassRoom(steve, prog71985);

	return 0;
}