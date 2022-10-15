#ifndef BATTLEGROUND_H
#define BATTLEGROUND_H

class BattleGround : WarTheatre {


public:
	void add(WarTheatre* trap);

	int damageTotal();
};

#endif
