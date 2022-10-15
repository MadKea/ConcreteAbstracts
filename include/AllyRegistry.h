#ifndef ALLYREGISTRY_H
#define ALLYREGISTRY_H

class AllyRegistry : Registry {

public:
	map<AbstractCountry*, AbstractCountry*> allies;

	void addRecord(AbstractCountry* country1, AbstractCountry* country2);
};

#endif
