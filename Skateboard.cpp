//Created by Eliza Anderson

#include "Skateboard.h"
#include <stdlib.h>
#include <time.h>

Skateboard::Skateboard(string brand, string model)
{
	setBrand(brand);
	setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time)
{
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
