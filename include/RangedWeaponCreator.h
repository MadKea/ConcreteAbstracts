#ifndef RANGEDWEAPONCREATOR_H
#define RANGEDWEAPONCREATOR_H

class RangedWeaponCreator : AttackWeaponCreator {


protected:
	RangedWeaponCreator();

	AttackWeapon* produceAttackWeapon();
};

#endif
