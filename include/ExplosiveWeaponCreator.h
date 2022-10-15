#ifndef EXPLOSIVEWEAPONCREATOR_H
#define EXPLOSIVEWEAPONCREATOR_H

class ExplosiveWeaponCreator : AttackWeaponCreator {


protected:
	ExplosiveWeaponCreator();

	AttackWeapon* produceAttackWeapon();
};

#endif
