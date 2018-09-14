
#ifndef _CONS_INCLUDED_ 
#define _CONS_INCLUDED_
#include "die.h"
class ConsoleInterface {
public:
	ConsoleInterface();
	void askForNumberOfRolls();
	void outputResultFromDie(Die&);
private:
	int numberOfRolls;
};


#endif

