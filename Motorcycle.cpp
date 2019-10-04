//Created by Eliza Anderson

#include "Motorcycle.cpp"

Motorcycle::Motorcycle(string brand, string model, string fuelType, string engineType)
{
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
	setEngineType(engineType);
}

Motorcycle::~Motorcycle() = default;

string Motorcycle::getEngineType()
{
	return myEngineType;
}

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
