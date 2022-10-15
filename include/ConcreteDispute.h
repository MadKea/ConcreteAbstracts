#ifndef CONCRETEDISPUTE_H
#define CONCRETEDISPUTE_H

class ConcreteDispute : Dispute {

public:
	Government* governmentList;

	void negotiate(Government* government);
};

#endif
