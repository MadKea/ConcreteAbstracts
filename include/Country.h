#ifndef COUNTRY_H
#define COUNTRY_H

class Country : AbstractCountry {

private:
	int power;
	int populationSize;
	WarTheatre** warTheatres;
	People** recruits;
	Citizens citizens;
	Refugee refugees;
	int economic;
	ArmoryFacade* armoryFacade;

public:
	Iterator* createArmyIterator();

	Country* cloneCountry();

	Country();

	void createMemento();

	void undoMemento(CountryMemento countryMemento);

	int getPower();

	void setPower(int power);

	int getEconomic();

	void setEconomic(int economic);
};

#endif
