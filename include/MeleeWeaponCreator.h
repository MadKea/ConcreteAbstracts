#ifndef MELEEWEAPONCREATOR_H
#define MELEEWEAPONCREATOR_H

class MeleeWeaponCreator : AttackWeaponCreator {


protected:
	MeleeWeaponCreator();

	AttackWeapon* produceAttackWeapon();
};

#endif
