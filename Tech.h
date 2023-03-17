#pragma once
#include <string>
using namespace std;

class ITech
{
public:
	ITech()
	{}
	virtual void Show() = 0
	{};
	virtual ~ITech() = default;
protected:
	string _name;
	string _manufacturer;
};