#ifndef RECRUITITERATOR_H
#define RECRUITITERATOR_H

class RecruitIterator : Iterator {


public:
	void next();

	bool hasNext();

	Country* current();

	RecruitIterator();
};

#endif
