#ifndef VESSELWEAPONCREATOR_H
#define VESSELWEAPONCREATOR_H

class VesselWeaponCreator {


protected:
	virtual VesselWeapon* produceVesselWeapon() = 0;

public:
	VesselWeaponCreator();
};

#endif
