#include "console interface.h"
#include "die.h"
#include "stdlib.h"
int main() {
	//Creates a new instance of the class ConsoleInterface
	ConsoleInterface consInt = ConsoleInterface();
	//Creates a new instance of the class ConsoleInterface
	Die die = Die(6, 1);
	//Creates a reference to the Die object
	Die& dieRef = die;
	//Asks the user for number of rolls
	consInt.askForNumberOfRolls();
	//Generates an amount of rolls depending on user input
	consInt.outputResultFromDie(dieRef);
}