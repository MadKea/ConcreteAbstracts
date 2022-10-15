#ifndef COUNTRYHISTORY_H
#define COUNTRYHISTORY_H

class CountryHistory {

private:
	vector<CountryMemento*> history;

public:
	void addCommit(CountryMemento* memento);

	CountryMemento* removeCommit();
};

#endif
