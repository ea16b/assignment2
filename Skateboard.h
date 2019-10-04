//Created by Eliza Anderson

#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"

class Skateboard : public Vehicle
{
	public:
		//constructor
		explicit Skateboard (string brand, string model);

		//destructor
		virtual ~Skateboard();

		//mileage function
		virtual double mileageEstimate(double time);

		virtual string toString();
};

#endif //DRIVINGSIMULATOR_SKATEBOARD_H
