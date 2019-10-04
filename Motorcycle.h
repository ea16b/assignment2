//Created by Eliza Anderson

#ifndef DRIVINGSIMULATOR_MOTORCYCLE_H
#define DRIVINGSIMULATOR_MOTORCYCLE_H

#include "PoweredVehicle.h"

class Motorcycle : public PoweredVehicle
{
	//additional member data
	private:
		string myEngineType;

	public:
		//constructor
		explicit Motorcycle(string brand, string model, string fuelType,
			string engineType);

		//destructor
		virtual ~Motorcycle();

		//getter and setter
		string getEngineType();
		void setEngineType(string engineType);

		//mileage function
		virtual double mileageEstimate(double time);

		virtual string toString();
};

#endif //DRIVINGSIMULATOR_MOTORCYLE_H
