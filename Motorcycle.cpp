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

double Motorcycle::mileageEstimate(double time)
{
	double mileage = ________;
	return mileage;
}

string Motorcycle::toString()
{
	return "-> Motorcycle\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
		getEngineType();
}
