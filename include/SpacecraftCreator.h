#ifndef SPACECRAFTCREATOR_H
#define SPACECRAFTCREATOR_H

class SpacecraftCreator : VesselWeaponCreator {


protected:
	SpacecraftCreator();

	VesselWeapon* produceVesselWeapon();
};

#endif
