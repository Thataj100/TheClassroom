#include "CleanInput.h"
#include <string.h>
#include <stdbool.h>

bool RemoveBadChars(char* input)
{
	for (int i = 0; i < strlen(input); i++)
	{
		//replace newline with end-of-string marker
		if (input[i] == '\n')
			input[i] = '\0';

		//more checks can be added if needed
		//if(!isalpha(input[i])
		//	input[i] = '.';

		//more and more checks as needed
	}

	return true;
}