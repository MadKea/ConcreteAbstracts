#ifndef TANKCREATOR_H
#define TANKCREATOR_H

class TankCreator : VesselWeaponCreator {


protected:
	TankCreator();

	VesselWeapon* produceVesselWeapon();
};

#endif
