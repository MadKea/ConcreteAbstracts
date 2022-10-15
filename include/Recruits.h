#ifndef RECRUITS_H
#define RECRUITS_H

class Recruits : People {

private:
	bool isEnlisted;
	string militaryType;
	int weaponDamage;
	vector<AttackWeapon*> armory;
	vector<VesselWeapons*> vehicles;

public:
	void handle();
};

#endif
