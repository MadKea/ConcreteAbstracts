#ifndef WARTHEATRE_H
#define WARTHEATRE_H

class WarTheatre {

private:
	int damage;

public:
	WarTheatre();

	virtual void add(WarTheatre* trap) = 0;

	int getDamage();

	void setDamage(int damage);

	virtual int damageTotal() = 0;
};

#endif
