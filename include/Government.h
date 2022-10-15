#ifndef GOVERNMENT_H
#define GOVERNMENT_H

class Government {

private:
	Dispute mediator;

public:
	virtual void sendMessage() = 0;

	virtual void receiveMessage() = 0;

	void changed();
};

#endif
