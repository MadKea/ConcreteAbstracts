#ifndef ATTACKWEAPONCREATOR_H
#define ATTACKWEAPONCREATOR_H

class AttackWeaponCreator {


protected:
	virtual AttackWeapon* produceAttackWeapon() = 0;

public:
	AttackWeaponCreator();
};

#endif
