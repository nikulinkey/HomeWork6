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
	cout << "����������: " << _model << endl;
	cout << "�����: " << _name << endl;
	cout << "�������������: " << _manufacturer << endl;
	cout << "��������: " << _power << endl;
	cout << "������� �������(mA/h): " << _battery << endl;
}

Player::Player(int power, int battery, string name, string manufacturer, string model) : Devices(power, battery, name, manufacturer), _model(model)
{}
void Player::Show()
{
	cout << "����������: " << _model << endl;
	cout << "�����: " << _name << endl;
	cout << "�������������: " << _manufacturer << endl;
	cout << "��������: " << _power << endl;
	cout << "������� �������(mA/h): " << _battery << endl;
}

RoboCleaner::RoboCleaner(int power, int battery, string name, string manufacturer, int weight, string model)
	: Devices(power, battery, name, manufacturer), Appliances(power, weight, name, manufacturer), _model(model)
{}
void RoboCleaner::Show()
{
	cout << "����������: " << _model << endl;
	cout << "�����: " << Devices::_name << endl;
	cout << "�������������: " << Devices::_manufacturer << endl;
	cout << "��������: " << Devices::_power << endl;
	cout << "���: " << _weight << endl;
	cout << "������� �������(mA/h): " << _battery << endl;
}