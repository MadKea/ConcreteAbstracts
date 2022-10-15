#ifndef WARENGINE_H
#define WARENGINE_H

class WarEngine {

private:
	static WarEngine* warEngine;
	AllyRegistry allyRegistry;
	BattleRegistry battleRegistry;
	int attribute;

public:
	static WarEngine* getInstanceWarEngine();

	void runEngine();

	void stopEngine();

	void runGUIEngine();

protected:
	WarEngine();
};

#endif
