/**
*	@Surabhi Khachar
*	@4/15/28
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "Tester.h"

using namespace std;

int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts
	LinkedListOfInts testableList;
	Tester myTest;
	myTest.run();

	cout << "\nRunning...\nAnd we're done.\nGoodbye.\n";

	return 0;

}
