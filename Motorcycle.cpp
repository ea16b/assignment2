//Created by Eliza Anderson

#include "Motorcycle.cpp"

//constructor
Motorcycle::Motorcycle(string brand, string model, string fuelType, string engineType)
{
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);

	//additional member data with default value of 1
	setEngineType(engineType);
}

//destructor
Motorcycle::~Motorcycle() = default;

//getter
string Motorcycle::getEngineType()
{
	return myEngineType;
}

//setter
void Motorcycle::setEngineType(string engineType)
{
	myEngineType = engineType;
}

/* Mileage = 35 miles per minute.
 * Boost mileage by 20% if the engine type
 * is "Twin-cylinder."
 */
double Motorcycle::mileageEstimate(double time)
{
	double mileage = 35 * time;
	if (engineType == "Twin-cylinder")
	{
		mileage += mileage * 0.2;
	}
	return mileage;
}

string Motorcycle::toString()
{
	return "-> Motorcycle\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
		getEngineType();
}
