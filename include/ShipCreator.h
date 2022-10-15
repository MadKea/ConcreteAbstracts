#ifndef SHIPCREATOR_H
#define SHIPCREATOR_H

class ShipCreator : VesselWeaponCreator {


protected:
	ShipCreator();

	VesselWeapon* produceVesselWeapon();
};

#endif
