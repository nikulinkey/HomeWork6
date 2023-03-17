#pragma once
#include "Tech.h"

class Appliances : virtual public ITech
{
public:
	Appliances();
	Appliances(int power, int weight, string name, string manufacturer);
	virtual void Show();
protected:
	string _name;
	string _manufacturer;
	int _power;
	int _weight;
};

class Fridge : public Appliances
{
public:
	Fridge(int power, int weight, string name, string manufacturer, string model);
	void Show() override;
protected:
	string _model;
};

class Washer : public Appliances
{
public:
	Washer(int power, int weight, string name, string manufacturer, string model);
	void Show() override;
	string _model;
};