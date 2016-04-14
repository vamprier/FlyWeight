#ifndef WEBSITE_H
#define WEBSITE_H

#include "User.h"

class WebSite
{
public:
	WebSite(void);
	virtual ~WebSite(void);
public:
	virtual void Use(User* u) = 0;
};

#endif