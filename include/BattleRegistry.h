#ifndef BATTLEREGISTRY_H
#define BATTLEREGISTRY_H

class BattleRegistry : Registry {

public:
	map<AbstractCountry*, AbstractCountry*> battles;

	void addRecord(AbstractCountry* country1, AbstractCountry* country2);
};

#endif
