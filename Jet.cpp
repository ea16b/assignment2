//Created by Eliza Anderson

#include "Jet.h"
#include <stdlib.h>
#include <time.h>

Jet::Jet(string brand, string model, string fuelType, int engineCount)
{
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
	setEngineCount(engineCount);
}

Jet::~Jet() = defaualt;

int Jet::getEngineCount()
{
	return myEngineCount;
}

void Jet::setEngineCount(int engineCount)
{
	myEngineCount = engineCount;
}

double Jet::mileageEstimate(double time)
{
	srand(time(NULL));
	double mileage = rand() % 100 + 40;

	if (myEngineCount > 2)
	{
		mileage +- mileage * 0.055;
	}

	return mileage;
}

string Jet::toString()
{
	string s = "-> Jet\n\t";
	return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngines: " +
		to_string(myEngineCount);
}
