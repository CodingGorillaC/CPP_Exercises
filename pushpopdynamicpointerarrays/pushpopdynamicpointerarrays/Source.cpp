#include <iostream>


// For now, assume this only hold ints
class cIntStack
{
public:

	//variable 
	int theData[5];
	bool mCounter = false;
	bool chk_topOfStack = false;
	int t_Arr_Length = sizeof(theData) / sizeof(theData[0]);
	int topOfStackIndex = 0;
	int bottomOfStackIndex =0;

	/*
	Name: resize
	Purpose: To resize an array
	Argument: Take an Int
	*/
	void resize(int argc) {
		theData[argc];
	}


	void push(int newValue, int argv[]) {

		if (topOfStackIndex <= t_Arr_Length && mCounter == false) {
			argv = &theData[topOfStackIndex]; *argv = newValue;
			argv++;
			topOfStackIndex++;
		}
		else if (topOfStackIndex <= t_Arr_Length && mCounter == true) {
			argv = &theData[topOfStackIndex]; *argv = newValue;
			argv++;
			topOfStackIndex++;
		}
		else
			std::cout << "Sorry you reached the max length of the array" << std::endl;
	}

	/*
	Need to remove a spot and bump everything down
	*/
	int pop(void)
	{
		if(chk_topOfStack == true){
			std::cout << " from true You are popping: " << theData[topOfStackIndex ] << std::endl;
			theData[topOfStackIndex] = NULL;
			topOfStackIndex -= 1;
			chk_topOfStack = false;
			mCounter = true;
		}
		else {
			std::cout << "You are popping: " << theData[topOfStackIndex - 1] << std::endl;
			theData[topOfStackIndex - 1] = NULL;
			topOfStackIndex -= 1;
			chk_topOfStack = true;
			mCounter = true;
		}
		return 0;
	}

	void topOfStack() {

		if (mCounter == true && chk_topOfStack == true) {
			std::cout << theData[topOfStackIndex -1] << std::endl;
			mCounter = false;
			chk_topOfStack = false;
		}
		else if(chk_topOfStack == false)
		{
			if (topOfStackIndex >= bottomOfStackIndex) {
				std::cout << theData[bottomOfStackIndex] << std::endl;
			}
			else
			{
				topOfStackIndex -= 1;
				std::cout << theData[topOfStackIndex] << std::endl;
				chk_topOfStack = true;
			}
		}
		else
		{
			
			
				std::cout << theData[topOfStackIndex] << std::endl;

			chk_topOfStack = true;
		}
	}

	void bottomOfStack() {
		std::cout << theData[bottomOfStackIndex] << std::endl;



	}

	

	/*
	Function Name: movePLocation
	Purpose: To move the point of the pointer over one if there is spce avaliable
	*/
	void moveTopofStackLocation(int argv[]) {
		topOfStackIndex -= 1;


		
	};

	void check() {

		for (int i = 0; i < t_Arr_Length; i++) {

			std::cout << theData[i] << std::endl;
		}
	}
};


int main(int argc, char* argv[])
{
	//Varriables
	int arrSize = 3;

	//Class objects
	cIntStack myStack;

	//pointers
	int* pMyArray = new int [arrSize];

	//Calling constructors
	myStack.resize(arrSize);

	myStack.push(2, pMyArray);
	myStack.push(13, pMyArray);
	myStack.push(18, pMyArray);
	myStack.push(22, pMyArray);
	myStack.push(25, pMyArray);
	myStack.check();
	std::cout << "\n";
	myStack.pop();
	myStack.check();
	std::cout << "The top of the stack is: ";
	myStack.topOfStack();
	std::cout << "\n";
	myStack.check();
	myStack.pop();
	std::cout << "\n";
	std::cout << "Top of the stack is: ";
	myStack.topOfStack();
	std::cout << "\n";
	myStack.check();
	myStack.pop();
	std::cout << "\n";
	myStack.check();
	std::cout << "Top of the stack is: ";
	myStack.topOfStack();
	myStack.topOfStack();
	myStack.topOfStack();
	std::cout << "\n";
	myStack.pop();
	myStack.check();
	std::cout << "Top of the stack is: ";
	myStack.topOfStack();
	

	
	//delete[] pMyArray;

	return 0;
};
