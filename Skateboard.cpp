//Created by Eliza Anderson

#include "Skateboard.h"
#include <stdlib.h>
#include <time.h>

//constructor
Skateboard::Skateboard(string brand, string model)
{
	setBrand(brand);
	setModel(model);
}

//destructor
Skateboard::~Skateboard() = default;

/* Mileage is a random number between 0.1 and 0.5 miles per minute
 * If time is more than 25 minutes and less than 250 minutes,
 * add a random amount of mileage, ranging from 1 to a third of the
 * time's value.
 */
double Skateboard::mileageEstimate(double time)
{
	//randomly generate mileage
	srand(time(NULL));
	double mileage = rand() % .5 + .1;

	if (time > 25 && time < 250)
	{
		double third = time / 3;
		double random = rand() % third + 1;
		mileage = mileage + random;
	}

	return mileage;
}

string Skateboard::toString()
{
	string s = "-> Skateboard\n\t";
	return "-> Skateboard\n" + Vehicle::toString();
}
