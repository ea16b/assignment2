//Created by Eliza Anderson

#include "Jet.h"
#include <stdlib.h>
#include <time.h>

//constructor
Jet::Jet(string brand, string model, string fuelType, int engineCount)
{
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
	
	//additional member data with default value of 1
	setEngineCount(engineCount);
}

//destructor
Jet::~Jet() = default;

//getter
int Jet::getEngineCount()
{
	return myEngineCount;
}

//setter
void Jet::setEngineCount(int engineCount)
{
	myEngineCount = engineCount;
}

/* Mileage = a random number between 40 and 100 miles per minute
 * If the Jet has more than 2 engines and the fuel type is "Rocket,"
 * the mileage will be boosted by 5.5% per engine.
 */
double Jet::mileageEstimate(double time)
{
	//randomly generate mileage
	srand(time(NULL));
	double mileage = rand() % 100 + 40;

	if ((myEngineCount > 2) && (fuelType == "Rocket"))
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
