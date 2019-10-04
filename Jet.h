//Created by Eliza Anderson

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle
{
	private:
		int myEngineCount;

	public:
		explicit Jet(string brand, string model, string fuelType,
			int engineCount = 1);

		virtual ~Jet();
		int getEngineCount();
		void setEngineCount(int engineCount);
		virtual double mileageEstimate(double time);

		virtual string toString();
};

#endif //DRIVINGSIMULATOR_JET_H
