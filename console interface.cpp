#include "console interface.h"
#include <iostream>
#include "die.h"
//Object that handles console output and input
using namespace std;

	//Constructor
	ConsoleInterface::ConsoleInterface(){
		ConsoleInterface::numberOfRolls = 0;
	}
	//Funktion that asks the user for the ammount of desired rolls
	void ConsoleInterface::askForNumberOfRolls() {
		//Input validation loop
		do {
			//ask the user to input number of rolls
			cout << "Enter number of rolls: ";
			cin >> numberOfRolls;
			//if the input is invalid clear cin to receive valid input and display error message
			if (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Input invalid try again" << endl;

			}
			//if the inpput is less than 0 clear cin and display error message
			else if (numberOfRolls < 0) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Input invalid try again" << endl;
			}
			//If the input is valid break the loop
			else {
				break;
			}
		} while (true);
	}
	//Output a a number of random numbers depending on number of rolls input by the user
	void ConsoleInterface::outputResultFromDie(Die& die) {
		//roll the die a number of times and display the result in the console
		for (int i = 0; i < numberOfRolls; i++) {
			cout << "Result " << (i + 1) << ": " << die.genNumber() << endl;
		}
	}
