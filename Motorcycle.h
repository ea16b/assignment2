//Created by Eliza Anderson

#ifndef DRIVINGSIMULATOR_MOTORCYCLE_H
#define DRIVINGSIMULATOR_MOTORCYCLE_H

#include "PoweredVehicle.h"

class Motorcycle : public PoweredVehicle
{
	private:
		string myEngineType;

	public:
		Motorcycle();

		explicit Motorcycle(string brand, string model, string fuelType,
			string engineType);

		virtual ~Motorcycle();
		string getEngineType();
		void setEngineType(string engineType);
		virtual double mileageEstimate(double time);
		virtual string toString();
};

#endif //DRIVINGSIMULATOR_MOTORCYLE_H
