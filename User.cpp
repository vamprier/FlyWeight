#include "User.h"


User::User(string n):name(n)
{
}


User::~User(void)
{
}

void User::SetUser(string n)
{
	name = n;
}

string User::GetUser()
{
	return name;
}