#ifndef REGISTRY_H
#define REGISTRY_H

class Registry {

protected:
	vector<AbstractCountry*> countries;

public:
	virtual void addRecord(AbstractCountry* country1, AbstractCountry* country2) = 0;
};

#endif
