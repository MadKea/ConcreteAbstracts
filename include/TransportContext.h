#ifndef TRANSPORTCONTEXT_H
#define TRANSPORTCONTEXT_H

class TransportContext {

private:
	Transport* strategy;

public:
	void purchase(int cost);
};

#endif
