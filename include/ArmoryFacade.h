#ifndef ARMORYFACADE_H
#define ARMORYFACADE_H

class ArmoryFacade {

private:
	TransportContext* transport;
	RecruitContext* recruit;
	map<string, int> costOfWeapon;

public:
	void purchaseWeapon();

	void purchaseAttackVessel();

	void purchaseSupplies();
};

#endif
