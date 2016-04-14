#include "WebSiteFactory.h"


WebSiteFactory::WebSiteFactory(void)
{
}


WebSiteFactory::~WebSiteFactory(void)
{
}

WebSite* WebSiteFactory::GetWebSiteCategory(string key)
{
	map<string,ConcreteWebSite*>::iterator it = flyweight.find(key);
	if( it == flyweight.end())
	{
		flyweight[key] = (new ConcreteWebSite(key));
	}
	return flyweight[key];
}

int WebSiteFactory::GetWebSiteCount()
{
	return flyweight.size();
}