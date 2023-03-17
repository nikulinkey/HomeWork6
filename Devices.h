#pragma once
#include "Tech.h"
#include "Appliances.h"

class Devices : virtual public ITech
{
public:
	Devices();
	Devices(int power, int battery, string name, string manufacturer);
	virtual void Show();
protected:
	string _name;
	string _manufacturer;
	int _power;
	int _battery;
};

class Phone : public Devices
{
public:
	Phone(int power, int battery, string name, string manufacturer, string model);
	void Show() override;
protected:
	string _model;
};

class Player : public Devices
{
public:
	Player(int power, int battery, string name, string manufacturer, string model);
	void Show() override;
	string _model;
};

class RoboCleaner : public Devices, Appliances
{
public:
	RoboCleaner(int power, int battery, string name, string manufacturer, int weight, string model);
	void Show() override;
protected:
	string _model;
};