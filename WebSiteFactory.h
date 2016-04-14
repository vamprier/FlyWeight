#ifndef WEBSITEFACTORY_H
#define WEBSITEFACTORY_H

#include "ConcreteWebSite.h"

class WebSiteFactory
{
public:
	WebSiteFactory(void);
	~WebSiteFactory(void);
public:
	WebSite* GetWebSiteCategory(string key);
	int GetWebSiteCount();
private:
	map<string,ConcreteWebSite*> flyweight;
};

#endif