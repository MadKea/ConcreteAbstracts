#ifndef ABSTRACTCOUNTRY_H
#define ABSTRACTCOUNTRY_H

class AbstractCountry {


public:
	virtual Iterator* createArmyIterator() = 0;

	virtual Country* cloneCountry() = 0;
};

#endif
