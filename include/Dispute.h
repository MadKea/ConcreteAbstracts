#ifndef DISPUTE_H
#define DISPUTE_H

class Dispute {

private:
	Government* AllianceA;
	Government* AllianceB;
	int conflictLevel;
	bool resolved;
	string description;

public:
	virtual void negotiate(Government* government) = 0;
};

#endif
