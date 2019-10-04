//Created by Eliza Anderson

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle
{
	//additional member data
	private:
		int myEngineCount;

	public:
		//constructor
		explicit Jet(string brand, string model, string fuelType,
			int engineCount = 1);

		//destructor
		virtual ~Jet();

		//getter and setter
		int getEngineCount();
		void setEngineCount(int engineCount);

		//mileage function
		virtual double mileageEstimate(double time);

		virtual string toString();
};

#endif //DRIVINGSIMULATOR_JET_H
