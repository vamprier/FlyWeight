#include "ConcreteWebSite.h"


ConcreteWebSite::ConcreteWebSite(string n):name(n)
{
}


ConcreteWebSite::~ConcreteWebSite(void)
{
	
}

void ConcreteWebSite::Use(User* u)
{
	cout<<"网站分类："<<name<<",用户名："<<u->GetUser()<<endl;
}