#ifndef TRAP_H
#define TRAP_H

class Trap : WarTheatre {

private:
	WarTheatre* trap;
	bool isActive;

public:
	void add(WarTheatre* trap);

	Trap();

	bool getActive();

	void setActive(bool active);

	int damageTotal();
};

#endif
