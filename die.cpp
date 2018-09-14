#include "die.h"
#include <cstdlib>
#include <ctime>
//Object that outputs random numbers based on construction variables

	//Constructor
	Die::Die(int maxRange, int minRange){
		this->maxRange = maxRange;
		this->minRange = minRange;
		//Seeds rand with system time
		srand((int)time(0));
	}
	//Funktion to output a random int within the ranges defined by the maxRange and minRange variables
	int Die::genNumber() {
		int result = (rand() %maxRange) + minRange;
		return result;
	}
	
