//Created by Eliza Anderson

#ifndef DRIVINGSIMULATOR_MOTORCYCLE_H
#define DRIVINGSIMULATOR_MOTORCYCLE_H

#include "PoweredVehicle.h"

class Motorcycle : public PoweredVehicle
{
	private:
		______________;

	Public:
		Motorcycle();

		explicit Motorcycle(string brand, string model, string fuelType,
			_____________);

		virtual ~Motorcycle();
		//getter
		//setter
		virtual double mileageEstimate(double time);
		virtual string toString();
};
