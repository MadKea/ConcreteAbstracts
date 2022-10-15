#include "Country.h"

Iterator* Country::createArmyIterator() {
	// TODO - implement Country::createArmyIterator
	throw "Not yet implemented";
}

Country* Country::cloneCountry() {
	// TODO - implement Country::cloneCountry
	throw "Not yet implemented";
}

Country::Country() {
	// TODO - implement Country::Country
	throw "Not yet implemented";
}

void Country::createMemento() {
	// TODO - implement Country::createMemento
	throw "Not yet implemented";
}

void Country::undoMemento(CountryMemento countryMemento) {
	// TODO - implement Country::undoMemento
	throw "Not yet implemented";
}

int Country::getPower() {
	return this->power;
}

void Country::setPower(int power) {
	this->power = power;
}

int Country::getEconomic() {
	return this->economic;
}

void Country::setEconomic(int economic) {
	this->economic = economic;
}
