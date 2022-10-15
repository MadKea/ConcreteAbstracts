#ifndef ITERATOR_H
#define ITERATOR_H

class Iterator {


public:
	void next();

	bool hasNext();

	Country* current();
};

#endif
