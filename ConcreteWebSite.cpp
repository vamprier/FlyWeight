#include "ConcreteWebSite.h"


ConcreteWebSite::ConcreteWebSite(string n):name(n)
{
}


ConcreteWebSite::~ConcreteWebSite(void)
{
	
}

void ConcreteWebSite::Use(User* u)
{
	cout<<"��վ���ࣺ"<<name<<",�û�����"<<u->GetUser()<<endl;
}