#ifndef USER_H
#define USER_H

#include <string>
#include <map>
#include <iostream>

using namespace std;

class User
{
public:
	User(string n);
	~User(void);
public:
	void SetUser(string n);
	string GetUser();
private:
	string name;
};

#endif