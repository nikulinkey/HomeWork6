#include <iostream>
#include "Devices.h"
#include "Tech.h"
#include "Appliances.h"
#include <string>
using namespace std;

Devices::Devices()
{}
Devices::Devices(int power, int battery, string name, string manufacturer) : _power(power), _battery(battery), _name(name), _manufacturer(manufacturer)
{}
void Devices::Show()
{}

Phone::Phone(int power, int battery, string name, string manufacturer, string model) : Devices(power, battery, name, manufacturer), _model(model)
{}
void Phone::Show()
{
	cout << "Устройство: " << _model << endl;
	cout << "Марка: " << _name << endl;
	cout << "Производитель: " << _manufacturer << endl;
	cout << "Мощность: " << _power << endl;
	cout << "Емкость батареи(mA/h): " << _battery << endl;
}

Player::Player(int power, int battery, string name, string manufacturer, string model) : Devices(power, battery, name, manufacturer), _model(model)
{}
void Player::Show()
{
	cout << "Устройство: " << _model << endl;
	cout << "Марка: " << _name << endl;
	cout << "Производитель: " << _manufacturer << endl;
	cout << "Мощность: " << _power << endl;
	cout << "Емкость батареи(mA/h): " << _battery << endl;
}

RoboCleaner::RoboCleaner(int power, int battery, string name, string manufacturer, int weight, string model)
	: Devices(power, battery, name, manufacturer), Appliances(power, weight, name, manufacturer), _model(model)
{}
void RoboCleaner::Show()
{
	cout << "Устройство: " << _model << endl;
	cout << "Марка: " << Devices::_name << endl;
	cout << "Производитель: " << Devices::_manufacturer << endl;
	cout << "Мощность: " << Devices::_power << endl;
	cout << "Вес: " << _weight << endl;
	cout << "Емкость батареи(mA/h): " << _battery << endl;
}