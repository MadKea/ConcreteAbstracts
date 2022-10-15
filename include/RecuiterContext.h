#ifndef RECUITERCONTEXT_H
#define RECUITERCONTEXT_H

class RecuiterContext {

private:
	Recruits state;

public:
	void request();

	void setState(Recruits state);
};

#endif
