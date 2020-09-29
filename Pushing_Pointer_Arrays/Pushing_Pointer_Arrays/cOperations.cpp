#include "cOperations.h"
#include <iostream>

/*
Function Name: Push
Purpose: to push numbers to the tail of the pointer
Note: When running iostreams it starts at the bottom of the stack
*/
void cOperations::Push(int argc, int argv[]) {
	for (int i = 0; i < 5; i++) {
		*argv = argc;
		if (i < 4)
			argv++;
		argc += 5;
	}
}