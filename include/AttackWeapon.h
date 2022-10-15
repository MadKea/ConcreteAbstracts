#ifndef ATTACKWEAPON_H
#define ATTACKWEAPON_H

class AttackWeapon {

private:
	int damage;

public:
	virtual int getDamage() = 0;
};

#endif
