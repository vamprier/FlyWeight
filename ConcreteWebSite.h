#ifndef CONCREATEWEBSITE_H
#define CONCREATEWEBSITE_H

#include "website.h"

class ConcreteWebSite : public WebSite
{
public:
	ConcreteWebSite(string n);
	~ConcreteWebSite(void);
public:
	virtual void Use(User* u);
private:
	string name;
};

#endif