#ifndef COUNTRYMEMENTO_H
#define COUNTRYMEMENTO_H

class CountryMemento {

private:
	Country* state;

public:
	void commitHistory(Country* country);

	Country* undo();
};

#endif
