#ifndef JETCREATOR_H
#define JETCREATOR_H

class JetCreator : VesselWeaponCreator {


protected:
	JetCreator();

	VesselWeapon* produceVesselWeapon();
};

#endif
