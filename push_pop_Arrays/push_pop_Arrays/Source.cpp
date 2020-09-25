#include <iostream>



// For now, assume this only hold ints
class cIntStack
{
public:
	//variable 
	int theData[8];
	int topOfStackIndex = 0;
	int bottomOfStackIndex = 0;


	//Constructors
	void push(int newValue) {
		theData[topOfStackIndex] = newValue;
		topOfStackIndex += 1;
	}

	int pop(void)
	{
		theData[(topOfStackIndex - 1)] = NULL;
		topOfStackIndex = topOfStackIndex - 1;
		return 0;
	}

	void topOfStack() {
		std::cout << theData[topOfStackIndex - 1] << std::endl;
	}

	void bottomOfStack() {
		std::cout << theData[0] << std::endl;
	}




};


int main(int argc, char* argv[])
{

	//Class objects
	cIntStack myStack;

	myStack.push(2);
	myStack.push(20);
	myStack.push(30);
	myStack.topOfStack();
	myStack.pop();
	myStack.topOfStack();




	return 0;
};
