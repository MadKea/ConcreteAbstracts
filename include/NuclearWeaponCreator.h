#ifndef NUCLEARWEAPONCREATOR_H
#define NUCLEARWEAPONCREATOR_H

class NuclearWeaponCreator : AttackWeaponCreator {


protected:
	NuclearWeaponCreator();

	AttackWeapon* produceAttackWeapon();
};

#endif
